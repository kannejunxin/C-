#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//这题画图理解最好
//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//字符函数和字符串函数
//介绍处理字符和字符串的库函数

//strlen
//返回值为无符号整形
#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//}
//strlen模拟实现 计数器，指针-指针，递归

//strcpy 字符串拷贝
//strcpy 模拟实现
#include<assert.h>
//char* my_strcpy(char * dest, const char* src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//
//	/*while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//
//	//优化
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//
//	return ret;//返回目标空间的起始地址 确保目标空间被改变
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	//arr1必须足够大且可修改
//	//arr2必须有'\0'
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat -字符串追加

//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目标空间的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//不可以写成！！
//	/*while (*dest++)
//	{
//		;
//	}*/
//	//因为之后追加dest是从'\0'后面开始的！！
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[] = "World";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp - 字符串比较
//注意C标准规定是strcmp返回>0 or <0 or =0 没规定一定是 -1 0 1，这只是window系统下visual studio运行的特例，其他操作系统不一定这样
#include<stdlib.h>
//int my_strcmp(const char * s1, const char * s2 )
//{
//	//assert(s1 && s2);
//	//while (*s1 == *s2)
//	//{
//	//	if (*s1 == '\0')
//	//		return 0;
//	//	s1++;
//	//	s2++;
//	//}
//	//if (*s1 > *s2)
//	//	return 1;
//	//else
//	//	return -1;
//
//	//优化
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	//int ret = strcmp("abq", "abcdef");
//	//int ret = strcmp("abc", "abcd");
//	//int ret = strcmp("abcd", "abcd");
//	int ret = my_strcmp("abq", "abcdef");
//	//字符串比较不是比较长度
//	//比较的是字符串中对应的位置的字符的ASCII码值
//	printf("%d\n", ret);
//}


//上面字符串函数 strcpy strcat strcmp  都存在目标函数位置不够的隐患，所以是不安全的函数
//所以C也提供了解决方法,下面就是长度受限制的字符串函数

//strncpy
//int main()
//{
//	char arr1[20] = "#############";
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat

//int main()
//{
//	char arr[20] = "hello \0#####";
//
//	strncat(arr, "abcdef", 3);
//	printf("%s\n", arr);
//	return 0;
//}

//strncmp

//int main()
//{
//	int ret = strncmp("abcdef", "abcd", 3);
//	//int ret = strncmp("abcdef", "abcd", 5);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - 再字符串中找另一个字符串  查找  

//模拟实现strstr
//字符串查找子串 还可以用KMP算法 
char * my_strstr(const char*s1, const char*s2)
{
	assert(s1 && s2);
	char * cp = s1;
	if (*s2 == '\0')
		return (char*)s1;
	while (*cp)
	{
		char*p1 = cp;
		char*p2 = s2;
		while ((*p1 !='\0')&&(*p2!='\0')&&(*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return cp;
		cp ++ ;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	/*char*ret = strstr(arr1, arr2);*/
	char*ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到子串");
	return 0;
}


 //strtok - 作用打印有分隔符的字符串的标记

//int main()
//{
//	char arr[] = "ene@163.com";//@  .  为分隔符
//	char *p = ".@";//分隔符的字符集合
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr);
//	//printf("%s\n", strtok(arr2, p));//切割arr 分隔符来自p
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//
//	//优化
//	char*ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}

//strerror- 把错误码翻译成错误信息
//库函数再使用的时候，如果发生错误，都会有对应的错误码
//这些错误码都被放在一个全局变量中：errno
//这个变量的使用要调用头文件#include<errno.h>


//int mian()
//{
//	//0123就是错误码 ，打印出来的就是错误信息
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	return 0;
//}

#include<errno.h>
//int main() 
//{
//	//printf("hehe\n");
//	FILE*pf = fopen("test.txt", "r");//参数一文件名 参数二操作
//	//这个操作会错误，因为在这个源码存放的文件夹没有这个文件
//	printf("%s\n", strerror(errno));
//	perror("hehe");
//}
//perror 功能与strerror 可以认为perror是对strerror的过度封装


//字符函数

//字符转换函数
//tolower 转成小写
//toupper 转成大小


//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (i )
//		{
//			arr[i] = tolower(arr[i]);//大写转换小写
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//
//}


//练习一
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int findRound(const char * src, char * find)
//{
//	char tmp[100] = { 0 };
//	strcpy(tmp, src);
//	strcat(tmp, src);
//	if (strstr(tmp, find) != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int ret = findRound(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//练习实现一个函数，可以左旋字符串中的k个字符。
//void leftRound(char *p, int k)
//{
//	int i, j;
//	char tmp;
//	int len = strlen(p);
//	for (i = 0; i < k; i++)
//	{
//		tmp = p[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[j] = tmp;
//	}
//}
//int main()
//{
//	char a[100];
//	int k;
//	char * p;
//	p = a;
//	printf("请输入字符串:>\n");
//	gets(a);
//	printf("请输入左旋K的个数:>\n");
//	scanf("%d", &k);
//	leftRound(p, k);
//	printf("%s", p);
//}


//练习三
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//
//
//要求：时间复杂度小于O(N);
//int find(int a[][4], int x, int y, int key)
//{
//	int i = 0, j = y - 1;
//	if (key<a[0][0] || key>a[x - 1][y - 1])
//		return 0;
//	while (i < x && j >= 0)
//	{
//		if (a[i][j] < key)
//		{
//			i++;
//		}
//		else if (a[i][j] > key)
//		{
//			j++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[4][4] = { {1,5,7,9},{4,6,10,15},{8,11,12,19},{14,16,18,21} };
//	if (find(a, 4, 4, 14))
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("找不到了");
//	}
//}
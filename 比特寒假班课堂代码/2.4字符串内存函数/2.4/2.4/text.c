#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���⻭ͼ������
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

//�ַ��������ַ�������
//���ܴ����ַ����ַ����Ŀ⺯��

//strlen
//����ֵΪ�޷�������
#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//}
//strlenģ��ʵ�� ��������ָ��-ָ�룬�ݹ�

//strcpy �ַ�������
//strcpy ģ��ʵ��
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
//	//�Ż�
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//
//	return ret;//����Ŀ��ռ����ʼ��ַ ȷ��Ŀ��ռ䱻�ı�
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	//arr1�����㹻���ҿ��޸�
//	//arr2������'\0'
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat -�ַ���׷��

//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ��ռ��'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//������д�ɣ���
//	/*while (*dest++)
//	{
//		;
//	}*/
//	//��Ϊ֮��׷��dest�Ǵ�'\0'���濪ʼ�ģ���
//	//2.׷��
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

//strcmp - �ַ����Ƚ�
//ע��C��׼�涨��strcmp����>0 or <0 or =0 û�涨һ���� -1 0 1����ֻ��windowϵͳ��visual studio���е���������������ϵͳ��һ������
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
//	//�Ż�
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
//	//�ַ����Ƚϲ��ǱȽϳ���
//	//�Ƚϵ����ַ����ж�Ӧ��λ�õ��ַ���ASCII��ֵ
//	printf("%d\n", ret);
//}


//�����ַ������� strcpy strcat strcmp  ������Ŀ�꺯��λ�ò����������������ǲ���ȫ�ĺ���
//����CҲ�ṩ�˽������,������ǳ��������Ƶ��ַ�������

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

//strstr - ���ַ���������һ���ַ���  ����  

//ģ��ʵ��strstr
//�ַ��������Ӵ� ��������KMP�㷨 
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
		printf("�Ҳ����Ӵ�");
	return 0;
}


 //strtok - ���ô�ӡ�зָ������ַ����ı��

//int main()
//{
//	char arr[] = "ene@163.com";//@  .  Ϊ�ָ���
//	char *p = ".@";//�ָ������ַ�����
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr);
//	//printf("%s\n", strtok(arr2, p));//�и�arr �ָ�������p
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//
//	//�Ż�
//	char*ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}

//strerror- �Ѵ����뷭��ɴ�����Ϣ
//�⺯����ʹ�õ�ʱ������������󣬶����ж�Ӧ�Ĵ�����
//��Щ�����붼������һ��ȫ�ֱ����У�errno
//���������ʹ��Ҫ����ͷ�ļ�#include<errno.h>


//int mian()
//{
//	//0123���Ǵ����� ����ӡ�����ľ��Ǵ�����Ϣ
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
//	FILE*pf = fopen("test.txt", "r");//����һ�ļ��� ����������
//	//��������������Ϊ�����Դ���ŵ��ļ���û������ļ�
//	printf("%s\n", strerror(errno));
//	perror("hehe");
//}
//perror ������strerror ������Ϊperror�Ƕ�strerror�Ĺ��ȷ�װ


//�ַ�����

//�ַ�ת������
//tolower ת��Сд
//toupper ת�ɴ�С


//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (i )
//		{
//			arr[i] = tolower(arr[i]);//��дת��Сд
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//
//}


//��ϰһ
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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

//��ϰʵ��һ�����������������ַ����е�k���ַ���
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
//	printf("�������ַ���:>\n");
//	gets(a);
//	printf("����������K�ĸ���:>\n");
//	scanf("%d", &k);
//	leftRound(p, k);
//	printf("%s", p);
//}


//��ϰ��
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
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
//		printf("�ҵ���");
//	}
//	else
//	{
//		printf("�Ҳ�����");
//	}
//}
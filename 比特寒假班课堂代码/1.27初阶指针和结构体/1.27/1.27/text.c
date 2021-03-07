#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* str)
{
	assert(str);
	char*start = (char*)str;
	while (*start != '\0')
	{
		start++;
	}
	return start - str;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}﻿﻿﻿

//int main()
//{
//	int a = 10;
//	int * p = &a;//指针变量 ，a的首地址
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int * p = &a;
//	*p = 0;
//	//当p是整形指针的时候，解引用访问4个字节的空间
//	a = 0x11223344;
//	char *pa = &a;
//	*pa = 0;
//	//当p是字符型指针的时候，解引用访问1个字节的空间
//	return 0;
//	//调式窗口-监视-内存可以直观看到区别
//	//指针类型的第一个作用就是决定其解引用时可以访问多少个字节
//	//int* ----4
//	//char*----1
//	//short*---2
//	//double*-----8
//}

//int main()
//{
//	int arr[100] = { 0 };
//	int* pa = arr;
//	char*pc = arr;
//	printf("%p\n", arr);
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	//打印三个变量一模一样
//	//即指针类型与变量不同但是可以存放
//	printf("----------------------\n");
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("----------------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型决定指针+/-1，走多大距离
//
//	return 0;
//}


//上述例子可以运用到数组
//int main()
//{
//	int arr[10] = { 0 };
//	char*pc = arr;//每次访问一个字节
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pc + i) = 'x';
//	}
//	//int *pc = arr;//每次访问四个字节，刚好与arr每个元素对应上
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//
//	//	*(pc + i) = i;
//	//}
//	return 0;
//}



//野指针
//test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*pa=test();//
//	printf("hehe\n");
//	printf("%d\n", *pa);//随机的，因为函数执行完后会释放，此时p为野指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	//越界访问导致野指针的问题
//	for (i = 0; i < 11; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int *q = NULL;//对于不确定指向那个，及时置空
//	//指向NULL的不能访问
//	return 0;
//}


//指针的运算
//指针+-整数
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;//++比*优先级高
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//指针-指针   的绝对值是指针与指针之间元素个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//指针-指针 前提条件是两个指针指向同一块连续地址
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &ch[3]);
//	return 0;
//}

//指针-指针练习  之前用过计数器，递归两个方法
//int my_strlen(char * str)
//{
//	char *start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//数组和指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 }, i;
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]= %p <====> p+%d=%p \n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int** pp=&p;
//	**pp = 20;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组
//以指针为元素的数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 'a','b' };
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3]={&a, &b, &c};//每个元素类型为int*
//}

//int main()
//{
//	char*p = "ABCDEF";//把字符串首字符地址存于p
//	printf("%s\n", p);
//	char * arr[] = { "abcef","helo","bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//结构体
//描述学生
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tale[12];
//	char sex[5];
//};
//
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tale[12];
//	char sex[5];
//}s1,s2;
////这里创建的s1,s2变量是全局的
//int main()
//{
//	struct stu s;
//	//这里创建的是局部
//	struct stu s1;
//	struct stu s2;
//	
//	return 0;
//}

//创建结构体描述坐标
//struct point
//{
//	int x;
//	int y;
//
//};
//struct S
//{
//	char arr[10];
//	struct point p;
//	double d;
//	int *ptr;
//};
//int main()
//{
//	struct point p = { 1,2 };
//	printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//	struct S s = { "abcef",{2,3},3.14,&a };
//	printf("%s %d %d %lf\n", s.arr, s.p.x, s.p.y, s.d);
//	return 0;
//}

//结构体传参
//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//void print1(struct S ss)//传值
//{
//	printf("%s %d %lf", ss.arr, ss.num, ss.d);
//}

//print2相对来说比较好，因为空间print1临时开辟的空间是结构体的大小，若结构体很大，那么会造成空间浪费
//void print1(struct S* ps)//传址
//{
//	printf("%s %d %lf", ps->arr, ps->num, ps->d);
//}
//int main()
//{
//	struct S s = { "hello bit",100,3.14 };
//	print1(s);//用print函数打印结构体数据
//	print2(&s);
//	return 0;
//}
//练习：判断结果
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}

//练习：写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//void print(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr);
//}

//写一个函数，可以逆序一个字符串的内容。
//void Reverse(char * p,int n)
//{
//	char temp;
//	int left = 0;
//	int right = n - 2;
//	while (left<=right)
//	{
//		temp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "I am a student";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("逆序前:%s\n", arr);
//	Reverse(arr,sz);
//	printf("逆序后:%s\n", arr);
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int a,i=1;
//	int sum = 0,temp=0;
//	printf("请输入a的值\n");
//	scanf("%d", &a);
//	while (i<=5)
//	{
//		temp = temp * 10 + a;
//		sum += temp;
//		i++;
//	}
//	printf("Sn的值为:%d", sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		int temp = i, n = 0, sum = 0;
//		/*得到位数*/
//		while (temp)
//		{
//			n++;
//			temp = temp / 10;
//		}
//		/*验证是否为水仙花数*/
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp=temp / 10;
//		}
//		if (i == sum)
//			printf("%d ", sum);
//	}
//	return 0;
//}


//打印菱形
//int main()
//{
//	int i, j;
//	char arr[13][13] = { 0 };
//	//先初始化
//	for ( i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	//然后赋值
//	for (i = 0; i < 13; i++)
//	{
//		if (i < 7)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				arr[i][6 - j] = '*';
//				arr[i][6 + j] = '*';
//			}
//		}
//		else
//		{
//			for ( j = 0; j <= i-(i-6)*2; j++)
//			{
//				arr[i][6 - j] = '*';
//				arr[i][6 + j] = '*';
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int a, x, y; //a为钱数，x为喝汽水数量，y为空瓶
//	scanf("%d", &a);
//	x = a;
//	y = x;
//	while (y!=0 && y!=1)
//	{
//		x += y / 2;
//		if (y % 2 == 0)
//		{
//			y = y / 2;
//		}
//		else
//		{
//			y = y / 2 + y % 2;
//		}
//	}
//	printf("%d", x);
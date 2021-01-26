#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



//练习1：实现函数判断year是不是润年。
//void is_yaear(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//}
//int main()
//{
//	int year;
//	void is_yaear(int year);
//	printf("请输入想要判断是否为闰年的年份\n");
//	scanf("%d", &year);
//	is_yaear(year);
//	return 0;
//}
//
//



//练习2：实现一个函数，判断一个数是不是素数。利用函数打印100到200之间的素数。
//int is_Prime(int n)
//{
//	int i;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (i > sqrt(n))
//		return 1;
//}
//int main()
//{
//	int i;
//	int is_Prime(int n);
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 2 == 0)
//			continue;
//		else
//		{
//			if (is_Prime(i))
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}


//练习3：实现一个函数来交换两个整数的内容。
//void my_swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//}
//int main()
//{
//	int a, b;
//	void my_swap(int a, int b);
//	printf("请输入两个整数:\n");
//	scanf("%d%d", &a, &b);
//	printf("交换两个整数的内容:\n");
//	my_swap(a, b);
//	return 0;
//}



//练习4：实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定 如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void my_print(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int a;
//	void my_print(int n);
//	printf("请输入想要打印乘法口诀表的行数:\n");
//	scanf("%d", &a);
//	my_print(a);
//	return 0;
//}


//函数是什么？
//函数是一个大型程序中的某部分代码，由一个或多个语句块（大括号）组成，它负责某项特定任务

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//库函数：
//频繁大量地使用某一功能，后来为了统一，为这一功能提供特定的函数实现
//
//IO函数
//字符串操作函数
//字符操作函数
//内存操作函数
//日期/时间函数
//数学函数
//其他库函数

//借助cplusplus网站，MSDN软件等学习库函数


#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "xxxxxxxxx";
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//int get_max(int x, int y)
//{
//	int z = (x > y) ? (x) : (y);
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//}

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数交换 a和b;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	return 0;
//}
//传值调用
//但是这是无法交换的，因为形参只是实参的一份临时拷贝，对形参的修改不会影响实参，应该用指针
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数交换 a和b;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	return 0;
//}
////传址调用
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int * pa = &a;
//	int * pb = &b;
//	text(pa, pb); //传值 因为即使是指针变量但还是传pa pb变量
//	text2(&pa, &pb);//传址 
//}
//所以即使是指针也有可能是传值


//写一个函数 实现整形有序数值的二分查找
//int binary_search(int arr[], int k, int sz)//arr传的是首元素地址
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//这里就不需要break了，因为return功能比break强大，return用完就结束了
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//找到返回下标，找不到返回-1
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，小标是：%d\n",ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，num的值加一
//Add(int * p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
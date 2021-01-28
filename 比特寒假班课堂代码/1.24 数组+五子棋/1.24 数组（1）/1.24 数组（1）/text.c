#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组的创建
//int main()
//{
//	int arr[10] = {0};
//	char ch[5 + 5] = { 0 };//[]内要常量 ，不可以变量，但是c99标准下的编译器可以
//	return 0;
//}
//一维数组初始化
//int main()
//{
//	int arr1[10] = { 1 };//不完全初始化
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr3[10] = { 0 };
//	int arr4[] = { 0 };//一个元素
//	char ch[10] = { 0 };
//	char ch2[10] = { 'a','b','c' };
//	char ch3[] = "abc";
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//4个元素 ,'\0'
//	char arr2[] = { 'a','b','c' };//3个元素
//	return 0;
//}

//一维数组的使用(访问)
//int main()
//{
//	char arr[] = { 'b','i','t' };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int*p = arr;//数组名-数组首元素的地址
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p <============> %p\n",i ,&arr[i],p+i);
	}
	//p+i --- 是数组arr中下标为i的元素的地址，所以可以使用指针P访问数组
	return 0;
	//数组在内存中连续存放，随着数组下标增长，地址由低到高变化
}

//int main()
//{
	//二维数组的初始化
	/*int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10};*/
	//int arr[3][5] = { {1,2,3,4},{5,6,7,8},{9,10} };
	//int arr[][5] = { 1,2,3,4,5,6,7,8,9,10 };
	/*int arr[5][];*///报错
	
	//二维数组的使用/访问
	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	putchar('\n');
	//}
	//return 0;
//}


//二维数组的地址
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序排序数组
//void bubble_sort(int arr[],int sz)//sz必须在主函数内算出，sz是元素个数
//{
//	int i, j,temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{//每一趟进行sz - 1 - i，理解
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////优化
//void bubble_sort(int arr[], int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])//当每一趟都发现前一项比后一项大就不会进行if语句，flag就不会变化
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//冒泡思想：两两相邻元素比较
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 },i;
//	//由小到大排序
//	//n个元素进行n-1趟冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名
//数组名是数组首元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	
//	//但是有两个例外:
//	//一
//	printf("%d\n", sizeof(arr));//此时表示整个数组 4*10=40
//	//二
//	//&arr,此时arr也表示整个数组
//	
//	return 0;
//}


//练习
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#define A 10
//void init(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[A], i;
//	printf("init() 初始化数组为全0\n");
//	init(arr,A);
//	printf("print()打印数组的每个元素\n");
//	Print(arr, A);
//	printf("输入数组的每个元素\n");
//	for (i = 0; i < A; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("print()打印数组的每个元素\n");
//	Print(arr, A);
//	printf("reverse()函数完成数组元素的逆置后用print()打印数组的每个元素\n");
//	reverse(arr, A);
//	Print(arr, A);
//	return 0;
//}

//练习
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i,tmp=0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int B[10] = { 1,5,9,6,3,2,4,7,8,20 };
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	putchar('\n');
//	Swap(A, B, sz);
//	printf("交换后\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}
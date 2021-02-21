#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//000000000000000000000000000000001001
//	float*pfloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	//0 00000000 000000000000000000000001001
//	//-1^(0)*0.000000000000000000000001001*2^-126
//	printf("*pfloat的值为：%f\n", *pfloat);//0.000
//	
//	*pfloat = 9.0;
//	//10001.0
//	//(-1)^0 * 1.001 *2^3
//	//S=0  M=1.001  E = 3+127
//	//0 10000010 001000000000000000000000000
//	//正数原反补相同
//	printf("n的值为：%d\n", n);
//	printf("*pfloat的值为：%f\n", *pfloat);
//	return 0;
//
//}
//
//
//指针数组 ： 存放指针的数组
//int main()
//{
//	int * arr[10];//整形指针数组 
//	char ** ch[20];//二级字符指针的数组
//	return 0;
//}



//数组指针
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char*pc = &ch;
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//数组指针
//
//	char ch[5];
//	char(*pc)[5] = &ch;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int *p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);//跳过一个元素
//
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);//会跳过数组
//}


//以前用指针访问数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//}
//指针访问数组另一个方法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", p[0][i]);
//		printf("%d ", *(*p + i));
//		//*p <===> arr
//	}
//	return 0;
//}


//正常情况下数组指针的用法 二维数组
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p + i)  找到第i行，i从0开始
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n"); 
//	}
//}
//int main()
//{
//	int arr[3][5] = { (1,2,3,4,5),(2,3,4,5,6),(3,4,5,6,7) };
//	//二维数组传参，数组名也是首元素地址，二维数组的首元素是第一行
//	//传过去的就是第一行的地址
//	//而第一行的地址是指向一个一维数组
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}



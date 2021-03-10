#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//内存操作函数

//memcpy -内存拷贝  标准规定memcpy函数不能实现重叠拷贝 ，但是vs下memcpy函数可以
//模拟实现
void* my_memcpy(void*dest, void*src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		//或者
		//++(char*)dest   ++(char*)src
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,5 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 16);//把arr1中的1 2 3 4传给arr2
	my_memcpy(arr2, arr1, 16);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
//
//
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//}
//


////模拟实现memmove函数
////memmove在拷贝的时候，有时候从前向后拷贝，有时候从后向前拷贝

//my_memmove(void*dest, void*src, size_t count)
//{
//	 void*ret = dest;
//	//dest落在src左边，从前向后
//	//dest落在src右边 从后向前
//	if (dest < src)
//	{
//		//从前向后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//
//	//	//想将1 2 3 4 放到 3 4 5 6
//	//	//但实际上拷贝不了，因为 3 4 被改了!!!!
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]),i;
//	//	my_memcpy(arr+2, arr, 16);//不可以
//	//memmove可以
//	//memmove(arr + 2, arr, 16);
//	my_memmove(arr + 2, arr, 16);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memcmp 内存比较


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,6,7 };
//	int ret1 = memcmp(arr1, arr2, 8);//比较arr1和arr2的前8个字节
//	int ret2 = memcmp(arr1, arr2, 9);//比较arr1和arr2的前9个字节
//
//	printf("%d %d\n", ret1,ret2);
//}


//memset

//int main()
//{
//	char arr[10] = { 0 };
//	memset(arr, '*', 10);
//
//	//但是memset很容易出错,memset是以字节为单位修改
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	return 0;
//}
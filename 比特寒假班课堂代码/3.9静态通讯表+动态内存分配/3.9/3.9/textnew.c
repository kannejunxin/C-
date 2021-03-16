#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//malloc
//calloc
//realloc
int main1()
{
	int arr[10] = { 0 };
	//在栈区上申请了40个字节的空间

	//动态开辟内存 （在堆区上申请空间
	int*p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("内存开辟失败\n");
	}
	else
	{
		//开辟成功
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = 0;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);
		}
	}
	//动态开辟内存的回收
	//1.手动释放free2.整个程序结束，自动回收
	free(p);
	p = NULL;
	return 0;
}

#include<errno.h>
int main2()
{
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p+i));
		}
		//若要增加空间
		int*ptr = (int*)realloc(p, 80);
		if (ptr != NULL)
		{ 
			p = ptr;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		//释放
		free(p);
		p = NULL;
	}
	return 0;
}


//动态开辟内存的常见问题
//1.对NULL指针解引用
//存在于动态内存开辟失败的时候

//2.对动态开辟内存的越界访问
int main3()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}

//3.对非动态开辟的内存使用free释放
int main4()
{
	int a = 10;
	int* p = &a;
	free(p);
}

//4.使用free释放一快动态内存的一部分
int main5()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*p++ = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}

//5.对同一块动态内存多次释放
int main6()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		free(p);
		p = NULL;
	}
	return 0;
}

//6.内存泄漏  忘记释放
//内存泄漏对于一天24小时不停歇的服务器十分严重，试想一天有10M内存不释放，这样的服务器跑几天就会瘫痪一次，瘫痪后重启继续用，再跑几天又会瘫痪
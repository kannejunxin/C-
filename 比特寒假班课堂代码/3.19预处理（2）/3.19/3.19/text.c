#define _CTR_SECURE_NO_WARNINGS
#include<stdio.h>


//带副作用的宏参数

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main1()
{
//	int m = 5;
//	int n = m + 1;//n=6 m=5
//	int n = ++m;//n=6  m=6  这个代码与上面的n相比具有副作用
//	//所谓副作用就是给原来的代码留下后遗症，m变成了6，上面的m还是5

	int a = 10;
	int b = 20;
	int c = MAX(a, b);
	int d = MAX(a++, b++);
	//会替换成 int d=((a++)>(b++)?(a++):(b++));//d是21 但是b的结果是22！
	printf("%d\n", c);//20
	printf("%d\n", d);//21
	printf("%d\n", a);
	printf("%d\n", b);

	//这里也可以写成函数
	//但是宏更加灵活，因为宏传参没有限制
	//宏比函数更加高效
	//但是宏也有自己劣势 具体看课件
	return 0;
}


//宏可以做到函数做不到的事情
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))//使用宏，参数部分可以传类型
//
//int main2()
//{
//	int *p = MALLOC(10, int);
//	//int *p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}


//#define MAX 100
//int main3()
//{
//
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}



//条件编译  满足条件参与编译，不满足就不参与
//#define __DEBUG__  //定义了_DEBUG_ 
int main3()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
#ifdef __DEBUG__  //如果定义了 _DEBUG_ 则#ifdef和#endif包含的语句为真
		printf("haha\n");
#endif

#if defined(__DEBUG__)  //如果定义了 _DEBUG_ 则#ifdef和#endif包含的语句为真
		printf("haha\n");
#endif
	}
	return 0;
}

int main6()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
#ifndef __DEBUG__  //如果没定义了 _DEBUG_ 则#ifdef和#endif包含的语句为真
		printf("haha\n");
#endif

#if !defined(__DEBUG__)  //如果没定义了 _DEBUG_ 则#ifdef和#endif包含的语句为真
		printf("haha\n");
#endif
	}
	return 0;
}

//条件编译还可以这样表示
//#if #elif #endif 使用
int main4()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
#if 1  
		printf("haha\n");
#endif
		 
#if 0  
		printf("haha\n");
#endif
	}
	return 0;
}

int main5()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
		//跟if else 一样 只要有一个为真 ，下面不执行
#if 2-2  
		printf("haha\n");
#elif 3-4
		printf("haha\n"); 
#elif 5-5  
		printf("haha\n");
#endif
	}
	return 0;
}



//文件包含
//<> 应用于C语言提供的库函数
//用<>，是直接去库目录下查找
//"" 应用于自定义的头文件
//用<>，首先去当前工程目录下找，如果找不到再去库目录下找
#include "add.h"
int main7()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	return 0;
}




//offsetof
#include<stddef.h>
#define OFFSETOF(struct_name,mem_name)   (int)(&(((struct_name*)0)->mem_name))
struct  S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));

	printf("%d\n", OFFSETOF(struct S, c));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//以上都是让scanf可以在vs可以直接使用，避免报错使用scanf_s,提高代码的可移植性

#include<stdio.h>

//学好编程，不仅仅是学好C语言
//必须要学好：语言、算法和数据结构，系统调用（操纵系统）和计算机网路

//int main()
//{
//	printf("hello bit\n");
//	printf("he he\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}


//main 函数三种写法
//法一:
//int main()
//{
//	return 0;
//}
//法二：
//int main(void)
//{
//
//}
//法三：
//int main(int argc, char* argv[])
//{
	//提前创建好两个变量
//	return 0;
//}


//数据类型大小：
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//}

//int a = 100; //全局变量
//
//int main()
//{
//	//局部变量
//	int a = 10;
//	{
//		int a = 2;
//	}
//	printf("%d", a);
//	return 0;
//}


//int a = 10;//全局变量的作用范围在整个工程
//
//void test()
//{
//	printf("a1=%d\n", a);
//}
//int main()
//{
//	{
//		printf("a2=%d\n", a);
//	}
//	printf("a3=%d\n", a);
//	test();
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


enum Sex //枚举常量 初始化的时候哦可以修改值 不修改默认从0开始
{
	MALE=5,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex sex = FEMALE;
	printf("%d\n", MALE);//0  5
	printf("%d\n", FEMALE);//1  6
	printf("%d\n", SECRET);//2   7
	return 0;
}

#define MAX 100 //define的标识符常量
#define pai 3.14
//int main()
//{
//	100;
//	2.4; //字面常量
//
//
//	const int a = 10;//const修饰的常变量
//	const float pai = 3.14f;//f是强制类型转换
//
//}
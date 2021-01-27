#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//函数的嵌套调用和链式访问
//函数的嵌套调用
//注意函数不可以嵌套定义！
//void new_line() 
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	new_line();
//	putchar('\n');
//	three_line();
//	return 0;
//}

//链式访问 ：把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	print("%d", print("%d", print("%d", 43)));// 4321
//	//printf()返回值是打印字符的个数，如果错误返回负数
//	return 0;
//}


//函数的声明和定义
#include"add.h"
//int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}


//当函数放在main后面，会报错，因为Add未定义（发生于编译器编译扫描阶段），所以函数放在main后面要先声明
//所以平时都会将定义直接放前面，可以避免声明
//但是进入公司后，都会创建一个头文件，用于存放函数声明，再创一个.c文件存放函数定义，分模块写


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//递归 
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//这是一个递归，main在自己调用自己，但是会报错，栈溢出

//练习：接受一个整形值(无符号）,按照顺序打印它的每一位
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//print函数可以把num的每一位打印在屏幕上
//	return 0; 
//}

//递归要有限制条件，满足可以跳出
//递归调用后要接近限制条件
//但是即使满足也有可能栈溢出


//模拟实现strlen
//非递归
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归 不创建中间变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);//后置++，所以为了谨慎还是写成str+1  1 + my_strlen(str+1)
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	数组名是首元素地址
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//用递归方法会大量的重复计算
//优化 迭代 通俗来说循环
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}

//汉诺塔问题





int main()
{

}












//青蛙跳台问题

//练习一：打印一个数的每一位
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int a;
//	printf("请输入想要打印每一位的整数\n");
//	scanf("%d", &a);
//	print(a);//打印a的每一位
//	return 0;
//}

//练习：递归和非递归分别实现求n的阶乘
//int P_factorial1(int n)//递归
//{
//	if (n>1)
//	{
//		return n * P_factorial1(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int P_factorial2(int n)//非递归
//{
//	int	X=1, i;
//	for (i = 1; i <= n; i++)
//	{
//		X *= i;
//	}
//	return X;
//}
//int main()
//{
//	int a,Y1,Y2;
//	printf("请输入想要求阶乘的数\n");
//	scanf("%d", &a);
//	Y1=P_factorial1(a);
//	Y2=P_factorial2(a);
//	printf("递归打印a的阶乘：%d\n", Y1);
//	printf("非递归打印a的阶乘：%d\n", Y2);
//	return 0;
//}

//递归和非递归分别实现strlen
//int my_strlen1(char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen1(str + 1);
//}
//int my_strlen2(char *str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *p = "abcdefg";
//	int len1 = my_strlen1(p);
//	int len2 = my_strlen2(p);
//	printf("递归：%d\n", len1);
//	printf("非递归：%d\n", len2);
//	return 0;
//}


//练习
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。

//reverse_string(char * string)
//{
//	char * left = string;
//	char * right = string + strlen(string) - 1;
//	while (left<right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("调整后arr的排序为:%s", arr);
//	return 0;
//}

//练习
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int a,x;
//	printf("请输入一个非负整数a\n");
//	scanf("%d", &a);
//	x=DigitSum(a);
//	printf("组成它的数字之和为%d", x);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//my_Pow(int n, int k)
//{
//	if (k != 1)
//		return n * my_Pow(n, k - 1);
//	else
//		return	n;
//}
//int main()
//{
//	int a,k,x;
//	printf("请输入一个非负整数a以及所求次方K\n");
//	scanf("%d%d", &a, &k);
//	x = my_Pow(a,k);
//	printf("%d的%d次方为为%d", a, k, x);
//}

//练习：递归和非递归分别实现求第n个斐波那契数
//int fib1(int n) //递归的方法
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib1(n - 2) + fib1(n - 1);
//}
//int fib2(int n) //非递归的方法
//{
//	int s = 1;
//	int a = 1, b = 1;
//	while (n>2)
//	{
//		s = a + b;
//		a = b;
//		b = s;
//		n--;
//	}
//	return s;
//
//}
//int main()
//{
//	int a, x1,x2;
//	printf("请输入想要求第几项斐波那契数\n");
//	scanf("%d", &a);
//	x1 = fib1(a);
//	x2 = fib2(a);
//	printf("请输入想要求第%d项斐波那契数值为：递归法：%d,非递归法：%d\n",a,x1,x2);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//预处理指令

//define 定义标识符

#define MAX 100
#define STR "HEHE"
#define reg register
#define print printf("hehe\n")
int main1()
{
	printf("%d\n",MAX);
	printf("%s", STR);
	print;
	return 0;
}

//define 定义宏

#define SQUARE(X) X*X

int main2()
{
	printf("%d\n", SQUARE(3));
	return 0;
}

//但事实上有时候没这没简单

int main3()
{
	printf("%d\n", SQUARE(3+2));//结果是11而不是25
	return 0;//因为替换会变成 3+2*3+2
}
//所以最好写成#define SQUARE(X) （X）*（X）

//你以为就没了吗 再举个例子
#define DOU(X) (X)+(X)
int main4()
{
	printf("%d\n", 2*DOU(5));//结果是15而不是20
	return 0;//因为替换会变成 2*(5)+(5)
}
//所以最好写成#define DOU(X)  （（X）*（X））



//#

#define print(data,format) printf("the value of " #data "is "format"\n",data)
//#作用将参数转换成以参数名为字符串内容的字符串
int main5()
{
	printf("hello world\n");
	printf("hello " "world\n");
	//两个连续的字符串会被合并成一个
}

int main6()
{
	int a = 10;
	printf("the value of a is %d\n", a);
	print(a, "%d");

	int b = 20;
	printf("the value of a is %d\n", b);

	float c = 45.0f;
	printf("the value of a is %f\n", c);

	//我们会发现代码过于冗余
	//我们就会想用函数
	//但是C语言中的函数没有java中的重载
	//所以用预处理指令！！！
	return 0;
}

//##
//将位于它两边的符号合成一个符号
#define CAT(X,Y) X##Y
int main()
{
	int Class100 = 2021;
	//思想当我们把Class和100合起来，在打印就会得到2021、
	printf("%d\n", CAT(Class, 100));
	return 0;

}
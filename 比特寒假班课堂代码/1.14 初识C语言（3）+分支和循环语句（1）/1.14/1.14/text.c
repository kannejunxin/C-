#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//下标引用操作符[]   函数调用操作符()

//关键字 注意关键字没有define
//auto 自动创建自动销毁 break case char const continue default do double else enum extern float
//for goto if int long register return short signed unsigned sizeof static struct switch typedef union
//void  volatile while


//typedef：
//typedef unsigned int uint; //对类型重命名，方便使用
//int main()
//{
//
//	unsigned int num = 10;
//	uint num2 = 10;
//	return  0;
//}



//static：-静态的
//static可以修饰局部变量 全局变量 函数
//情形一
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);   结果为： 2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		test();
//	}
//	return 0;
//}

//情形二
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);   结果为： 2~11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		test();
//	}
//	return 0;
//}

//情形三
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//
//}

//情形四  //会报错error 连接错误
//extern int A;
//int main()
//{
//	printf("%d\n", A);
//	return 0;
//
//}

//情形五
//extern int Add(int x, int y);//声明外部函数 x,y可以省略
//int main()
//{
//	int a = 10, b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}

//情形六
//extern int add(int x, int y);
//int main()
//{
//	int a = 10, b = 20;
//	int sum = add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}



//register 建议存于寄存器中，对于register修饰的变量不可以取地址

//define 定义常量 字符串 字符
//#define MAX 100
//#define STR "Hello World"
//#define CH 'w'
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	printf("%c\n", CH);
//
//}
//define 定义宏（无类型）
//#define ADD(x,y) (x+y)
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//}


//指针
//int main()
//{
//	int a = 10;
//	printf("%p", &a);  //打印出来是a的内存地址，以十六进制表示  &取地址操作符，是单目操作符  %p按照地址的格式打印
//	return  0;  //又因为int 占4个字节，所以上面打印的是a最小的地址
//	int *pa = &a; //pa为指针变量(*就说明pa是地址，int说明pa指向整形变量)，专门存放地址
//	*pa=20;//解引用操作，通过指针改变a存放的值
//	printf("%p", &a);
//
//	/*char ch = 'w';
//	char *pc = &ch;*/
//
//	return 0;
//}

//指针变量的大小 /32位 4  64位8
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//

//结构体
//创建学生类型
struct stu
{
	char name[20];
	short age;
	char sex[8];
};
//
//int main()
//{
//	//结构体的创建与初始化
//	struct  stu s1 = { "张三",20,"男" };//s1就是一个学生类型的对象
//	struct  stu s2 = { "李四",17,"女" };
//	//结构体的访问
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);
//	//.：结构体成员访问操作符   用法:结构体变量.结构体成员
//	struct stu* ps = &s1;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);  //注意*ps.name, *ps.age, *ps.sex这样会报错
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	return 0;
//}



//创建书籍类型
//struct book
//{
//	char name[20];
//	double price;
//	char id[20];
//
//};



//分支与循环语句
//语句 由分号隔开
//int main()
//{
//	;//空语句
//}

//分支语句(选择语句)
int main()
{
	int age = 0;

	/*if (age >= 18)
		printf("成年\n");*/

	//if (age >= 18)
	//{
	//	printf("成年\n");
	//	printf("谈恋爱\n");
	//}
	//else
	//{
	//	printf("未成年\n");
	//}
	//整体上是一个语句，因为代码只会选择一个进行
	return 0;
}

//if实现多分支
int main()
{
	int age = 0;

	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age<30)
	//	printf("青年\n");
	//else if (age >= 30 && age < 50)
	//	printf("中年\n");
	//else if (age >= 50 && age < 100)
	//	printf("老年\n"); 
	//else 
	//	printf("老寿星\n");

	if (age < 18)
		printf("未成年\n");
	else
	{
			if (age >= 18 && age < 30)
				printf("青年\n");
			else if (age >= 30 && age < 50)
				printf("中年\n");
			else if (age >= 50 && age < 100)
				printf("老年\n"); 
			else 
				printf("老寿星\n");

	}
	return 0;
}


int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	//容易认为打印haha 但是什么也不打印 悬空else问题

	//实际上是：
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}
	return 0;
}
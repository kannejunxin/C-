#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Book
//{
//	char name[20];
//	char author[20];
//	int price;
//}b2,b3,b4;
//typedef struct Book
//{
//	char name[20];
//	char author[20];
//	int price;
//}Book;//这里的book不再是变量了，而是struct Book的别名
//int main()
//{
//	struct Book b1 = { "C语言程序设计","谭浩强","55" };
//
//	printf("%s %s %d", b1.name, b1.author, b1.price);
//
//	Book b2 = { "C++语言程序设计","谭浩强","55" };
//
//	return 0;
//}

//匿名结构体类型
//只能用一次，就是s的那一次
//struct  
//{
//	char c;
//	int a;
//	short s;
//}s;
//struct
//{
//	char c;
//	int a;
//	short s;
//}*ps;
//int main()
//{
//	ps = &s;//err 对于匿名结构体类型即使成员变量相同，但编译器也认为是不同类型
//	return 0;
//}


//结构体自引用
//err
//struct Node
//{
//	int data;
//	struct Node n;
//};//会报错  因为Node的大小无法确定

//可以
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//err  因为涉及到先有蛋还是先有鸡的问题
//typedef struct
//{
//	int data;
//	Node*next;
//}Node;


//结构体嵌套初始化
//struct S
//{
//	int a;
//	int b;
//	double d;
//};
//struct B
//{
//	char c;
//	struct S s;
//	short ss;
//};
//int main()
//{
//	struct B b = { 'a',{111,20,3.14},2 };
//	printf("%lf", b.s.d);
//	return 0;
//}


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
//}Book;//�����book�����Ǳ����ˣ�����struct Book�ı���
//int main()
//{
//	struct Book b1 = { "C���Գ������","̷��ǿ","55" };
//
//	printf("%s %s %d", b1.name, b1.author, b1.price);
//
//	Book b2 = { "C++���Գ������","̷��ǿ","55" };
//
//	return 0;
//}

//�����ṹ������
//ֻ����һ�Σ�����s����һ��
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
//	ps = &s;//err ���������ṹ�����ͼ�ʹ��Ա������ͬ����������Ҳ��Ϊ�ǲ�ͬ����
//	return 0;
//}


//�ṹ��������
//err
//struct Node
//{
//	int data;
//	struct Node n;
//};//�ᱨ��  ��ΪNode�Ĵ�С�޷�ȷ��

//����
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//err  ��Ϊ�漰�����е��������м�������
//typedef struct
//{
//	int data;
//	Node*next;
//}Node;


//�ṹ��Ƕ�׳�ʼ��
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


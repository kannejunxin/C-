#define _CTR_SECURE_NO_WARNINGS
#include<stdio.h>


//�������õĺ����

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main1()
{
//	int m = 5;
//	int n = m + 1;//n=6 m=5
//	int n = ++m;//n=6  m=6  ��������������n��Ⱦ��и�����
//	//��ν�����þ��Ǹ�ԭ���Ĵ������º���֢��m�����6�������m����5

	int a = 10;
	int b = 20;
	int c = MAX(a, b);
	int d = MAX(a++, b++);
	//���滻�� int d=((a++)>(b++)?(a++):(b++));//d��21 ����b�Ľ����22��
	printf("%d\n", c);//20
	printf("%d\n", d);//21
	printf("%d\n", a);
	printf("%d\n", b);

	//����Ҳ����д�ɺ���
	//���Ǻ��������Ϊ�괫��û������
	//��Ⱥ������Ӹ�Ч
	//���Ǻ�Ҳ���Լ����� ���忴�μ�
	return 0;
}


//�������������������������
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))//ʹ�ú꣬�������ֿ��Դ�����
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



//��������  ��������������룬������Ͳ�����
//#define __DEBUG__  //������_DEBUG_ 
int main3()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
#ifdef __DEBUG__  //��������� _DEBUG_ ��#ifdef��#endif���������Ϊ��
		printf("haha\n");
#endif

#if defined(__DEBUG__)  //��������� _DEBUG_ ��#ifdef��#endif���������Ϊ��
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
#ifndef __DEBUG__  //���û������ _DEBUG_ ��#ifdef��#endif���������Ϊ��
		printf("haha\n");
#endif

#if !defined(__DEBUG__)  //���û������ _DEBUG_ ��#ifdef��#endif���������Ϊ��
		printf("haha\n");
#endif
	}
	return 0;
}

//�������뻹����������ʾ
//#if #elif #endif ʹ��
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
		//��if else һ�� ֻҪ��һ��Ϊ�� �����治ִ��
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



//�ļ�����
//<> Ӧ����C�����ṩ�Ŀ⺯��
//��<>����ֱ��ȥ��Ŀ¼�²���
//"" Ӧ�����Զ����ͷ�ļ�
//��<>������ȥ��ǰ����Ŀ¼���ң�����Ҳ�����ȥ��Ŀ¼����
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
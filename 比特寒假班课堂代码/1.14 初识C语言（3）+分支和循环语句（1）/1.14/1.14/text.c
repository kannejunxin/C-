#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//�±����ò�����[]   �������ò�����()

//�ؼ��� ע��ؼ���û��define
//auto �Զ������Զ����� break case char const continue default do double else enum extern float
//for goto if int long register return short signed unsigned sizeof static struct switch typedef union
//void  volatile while


//typedef��
//typedef unsigned int uint; //������������������ʹ��
//int main()
//{
//
//	unsigned int num = 10;
//	uint num2 = 10;
//	return  0;
//}



//static��-��̬��
//static�������ξֲ����� ȫ�ֱ��� ����
//����һ
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);   ���Ϊ�� 2 2 2 2 2 2 2 2 2 2
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

//���ζ�
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);   ���Ϊ�� 2~11
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

//������
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//
//}

//������  //�ᱨ��error ���Ӵ���
//extern int A;
//int main()
//{
//	printf("%d\n", A);
//	return 0;
//
//}

//������
//extern int Add(int x, int y);//�����ⲿ���� x,y����ʡ��
//int main()
//{
//	int a = 10, b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}

//������
//extern int add(int x, int y);
//int main()
//{
//	int a = 10, b = 20;
//	int sum = add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}



//register ������ڼĴ����У�����register���εı���������ȡ��ַ

//define ���峣�� �ַ��� �ַ�
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
//define ����꣨�����ͣ�
//#define ADD(x,y) (x+y)
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//}


//ָ��
//int main()
//{
//	int a = 10;
//	printf("%p", &a);  //��ӡ������a���ڴ��ַ����ʮ�����Ʊ�ʾ  &ȡ��ַ���������ǵ�Ŀ������  %p���յ�ַ�ĸ�ʽ��ӡ
//	return  0;  //����Ϊint ռ4���ֽڣ����������ӡ����a��С�ĵ�ַ
//	int *pa = &a; //paΪָ�����(*��˵��pa�ǵ�ַ��int˵��paָ�����α���)��ר�Ŵ�ŵ�ַ
//	*pa=20;//�����ò�����ͨ��ָ��ı�a��ŵ�ֵ
//	printf("%p", &a);
//
//	/*char ch = 'w';
//	char *pc = &ch;*/
//
//	return 0;
//}

//ָ������Ĵ�С /32λ 4  64λ8
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

//�ṹ��
//����ѧ������
struct stu
{
	char name[20];
	short age;
	char sex[8];
};
//
//int main()
//{
//	//�ṹ��Ĵ������ʼ��
//	struct  stu s1 = { "����",20,"��" };//s1����һ��ѧ�����͵Ķ���
//	struct  stu s2 = { "����",17,"Ů" };
//	//�ṹ��ķ���
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);
//	//.���ṹ���Ա���ʲ�����   �÷�:�ṹ�����.�ṹ���Ա
//	struct stu* ps = &s1;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);  //ע��*ps.name, *ps.age, *ps.sex�����ᱨ��
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	return 0;
//}



//�����鼮����
//struct book
//{
//	char name[20];
//	double price;
//	char id[20];
//
//};



//��֧��ѭ�����
//��� �ɷֺŸ���
//int main()
//{
//	;//�����
//}

//��֧���(ѡ�����)
int main()
{
	int age = 0;

	/*if (age >= 18)
		printf("����\n");*/

	//if (age >= 18)
	//{
	//	printf("����\n");
	//	printf("̸����\n");
	//}
	//else
	//{
	//	printf("δ����\n");
	//}
	//��������һ����䣬��Ϊ����ֻ��ѡ��һ������
	return 0;
}

//ifʵ�ֶ��֧
int main()
{
	int age = 0;

	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age<30)
	//	printf("����\n");
	//else if (age >= 30 && age < 50)
	//	printf("����\n");
	//else if (age >= 50 && age < 100)
	//	printf("����\n"); 
	//else 
	//	printf("������\n");

	if (age < 18)
		printf("δ����\n");
	else
	{
			if (age >= 18 && age < 30)
				printf("����\n");
			else if (age >= 30 && age < 50)
				printf("����\n");
			else if (age >= 50 && age < 100)
				printf("����\n"); 
			else 
				printf("������\n");

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
	//������Ϊ��ӡhaha ����ʲôҲ����ӡ ����else����

	//ʵ�����ǣ�
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
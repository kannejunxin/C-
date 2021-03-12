#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


//�ṹ���ڴ����  ���� �ṹ���ڼ����С��ʱ�򣬻ᷢ������

struct S1
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char d;
	char c;
	int i;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	double c1;
	struct S3 s3;
	double d;
};

int main1()
{
	struct S1 s1;
	struct S2 s2;
	struct S3 s3;
	struct S4 s4;
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
	printf("%d\n", sizeof(s3));//16
	printf("%d\n", sizeof(s4));//32
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, c2));
	return 0;
}

//#pragma pack(1) �����޸�Ĭ�϶����� ��8��Ϊ1


//λ��
//λ��������λ
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;

};
int main2()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main3()//��ʽ����
{
	struct S s = { 0 }; 
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
}


//ö��
enum Sex
{
	//ö�����͵Ŀ���ȡֵ
	MALE,
	FEMALE,
	SECRET
};
enum RGB
{
	//ö�ٵĿ���ȡֵ������ֵ�ģ�Ĭ�ϴ�0��ʼ ÿ�ε���1�������ڶ���ʱ����
	RED,
	GREEN,
	BLUE
};
int main4()
{
	enum Sex s = FEMALE;//MALE SECRET
	enum RGB rgb = GREEN;
	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);
	return 0;
}


//����
//�������϶��ԣ����ϵĳ�Ա����ͬʱ���� 
union Un
{
	char c;
	int i;
};
int main5()
{
	union Un n;
	printf("%d\n", sizeof(n));//4
	printf("%p\n", &n);
	printf("%p\n", &(n.c));
	printf("%p\n", &(n.i));
	n.i = 0x11223344;
	n.c = 0x55;
	printf("%x\n", n.i);//0x11223355
	return 0;
}

//�����������޸��жϴ�С�˵Ĵ���

int main6()
{
	int a = 1;//0x 00 00 00 01
	//01 00 00 00 С��
	//00 00 00 01 ���
	if (1 == *(char*)&a)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}


	//��
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	if (1 == u.c)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}

//������Ĵ�С
union U
{
	char arr[6];
	int i;
};
int main7()
{
	union U u;
	printf("%d\n", sizeof(u)); //8
}


union  Un1
{
	char c[5];
	int i;
};
union  Un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
}
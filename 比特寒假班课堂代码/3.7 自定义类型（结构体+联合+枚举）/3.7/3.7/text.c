#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>


//结构体内存对齐  —— 结构体在计算大小的时候，会发生对齐

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

//#pragma pack(1) 可以修改默认对齐数 将8改为1


//位段
//位：二进制位
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
int main3()//调式看看
{
	struct S s = { 0 }; 
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
}


//枚举
enum Sex
{
	//枚举类型的可能取值
	MALE,
	FEMALE,
	SECRET
};
enum RGB
{
	//枚举的可能取值都是有值的，默认从0开始 每次递增1，可以在定义时更改
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


//联合
//对于联合而言，联合的成员不能同时出现 
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

//利用联合体修改判断大小端的代码

int main6()
{
	int a = 1;//0x 00 00 00 01
	//01 00 00 00 小端
	//00 00 00 01 大端
	if (1 == *(char*)&a)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}


	//或
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	if (1 == u.c)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}

//联合体的大小
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
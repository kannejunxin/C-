#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//���϶�����scanf������vs����ֱ��ʹ�ã����ⱨ��ʹ��scanf_s,��ߴ���Ŀ���ֲ��

#include<stdio.h>

//ѧ�ñ�̣���������ѧ��C����
//����Ҫѧ�ã����ԡ��㷨�����ݽṹ��ϵͳ���ã�����ϵͳ���ͼ������·

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


//main ��������д��
//��һ:
//int main()
//{
//	return 0;
//}
//������
//int main(void)
//{
//
//}
//������
//int main(int argc, char* argv[])
//{
	//��ǰ��������������
//	return 0;
//}


//�������ʹ�С��
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

//int a = 100; //ȫ�ֱ���
//
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	{
//		int a = 2;
//	}
//	printf("%d", a);
//	return 0;
//}


//int a = 10;//ȫ�ֱ��������÷�Χ����������
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


enum Sex //ö�ٳ��� ��ʼ����ʱ��Ŷ�����޸�ֵ ���޸�Ĭ�ϴ�0��ʼ
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

#define MAX 100 //define�ı�ʶ������
#define pai 3.14
//int main()
//{
//	100;
//	2.4; //���泣��
//
//
//	const int a = 10;//const���εĳ�����
//	const float pai = 3.14f;//f��ǿ������ת��
//
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//000000000000000000000000000000001001
//	float*pfloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	//0 00000000 000000000000000000000001001
//	//-1^(0)*0.000000000000000000000001001*2^-126
//	printf("*pfloat��ֵΪ��%f\n", *pfloat);//0.000
//	
//	*pfloat = 9.0;
//	//10001.0
//	//(-1)^0 * 1.001 *2^3
//	//S=0  M=1.001  E = 3+127
//	//0 10000010 001000000000000000000000000
//	//����ԭ������ͬ
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pfloat��ֵΪ��%f\n", *pfloat);
//	return 0;
//
//}
//
//
//ָ������ �� ���ָ�������
//int main()
//{
//	int * arr[10];//����ָ������ 
//	char ** ch[20];//�����ַ�ָ�������
//	return 0;
//}



//����ָ��
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char*pc = &ch;
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//����ָ��
//
//	char ch[5];
//	char(*pc)[5] = &ch;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int *p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);//����һ��Ԫ��
//
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);//����������
//}


//��ǰ��ָ���������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//}
//ָ�����������һ������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", p[0][i]);
//		printf("%d ", *(*p + i));
//		//*p <===> arr
//	}
//	return 0;
//}


//�������������ָ����÷� ��ά����
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p + i)  �ҵ���i�У�i��0��ʼ
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n"); 
//	}
//}
//int main()
//{
//	int arr[3][5] = { (1,2,3,4,5),(2,3,4,5,6),(3,4,5,6,7) };
//	//��ά���鴫�Σ�������Ҳ����Ԫ�ص�ַ����ά�������Ԫ���ǵ�һ��
//	//����ȥ�ľ��ǵ�һ�еĵ�ַ
//	//����һ�еĵ�ַ��ָ��һ��һά����
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}



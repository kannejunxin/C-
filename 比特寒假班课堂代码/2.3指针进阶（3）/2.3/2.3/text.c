#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void qsort(void *base,//����������ݵ���ʼλ��
//			size_t num, //�����Ԫ�ظ���
//			size_t width, //ÿ��Ԫ�صĿ��
//			int(__cdecl *compare)(const void *elem1, const void *elem2));//������һ������ָ�����ã����Ƚϵ�����Ԫ�صıȽϺ������ȽϷ�����
//(_cdecl - ��������Լ��  ��ʱ������� ���Ժ���)

//qsort Ĭ���ų�����

//int cmp_int(const void*e1, const void*e2)
//{
//	return 	(*(int *)e2) - (*(int*)e1);
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 }, i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//ָ���������������
#include<string.h>
//sizeof ������ �����������ռ�ռ�Ĵ�С
//���Լ��� ���͡������ȵȵĴ�С�������С��ʱ���ں��ڴ����ŵ�ֵ
//
//strlen()���ַ�������
//ֻ������ �ַ������ַ����飬��ע��\0��
//�⺯��
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16   ��������������sizeof�ڲ� �������������ܴ�С
//	printf("%d\n", sizeof(a + 0));//   4 / 8
//	printf("%d\n", sizeof(*a));//  4 ��int�ͣ�����һ��Ԫ�أ�
//	printf("%d\n", sizeof(a + 1)); //  4 / 8
//	printf("%d\n", sizeof(a[1]));//4   �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));//  4 / 8  ȡ����������ĵ�ַ �����ǵ�ַ
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));// 4 / 8  ��ʹ������������ĵ�ַ����Ȼ�ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//  4 / 8   ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//  4 / 8
//
//	//�ַ�����
//	
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6   ��������������sizeof�ڲ� �������������ܴ�С  sizeof����ռ�Ĵ�С
//	printf("%d\n", sizeof(arr + 0));//  4 / 8 ����������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1  ������Ԫ��	
//	printf("%d\n", sizeof(arr[1]));//1  ����ڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));// 4 / 8  &arr��Ȼ��ȡ������ĵ�ַ�������ǵ�ַ
//	printf("%d\n", sizeof(&arr + 1));// 4/ 8  
//	printf("%d\n", sizeof(&arr[0] + 1));// ����ڶ���Ԫ�صĵ�ַ 
//	
//	printf("%d\n", strlen(arr));//���ֵ  ��Ϊarr������û'\0'
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err  strlen()�����Ĳ����ǵ�ַ   ��Ƿ������ڴ�
//	//printf("%d\n", strlen(arr[1]));//err  ͬ��
//	printf("%d\n", strlen(&arr));//���ֵ  ��ǰ�������ֵһ��  ��Ϊ&arr��Ȼȡ��������������ĵ�ַ ����ʵ����ʾ������Ԫ�صĵ�ַ
//	printf("%d\n", strlen(&arr + 1));//������ģ����ֵ- 6
//	printf("%d\n", strlen(&arr[0] + 1));//������ģ����ֵ - 1
//	
//	char arr[] = "abcdef";//��'\0'
//	printf("%d\n", sizeof(arr));//�����ܴ�С   7
//	printf("%d\n", sizeof(arr + 0));//  4 / 8  ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));// 1 ��һ��Ԫ��
//	printf("%d\n", sizeof(arr[1]));// 1 �ڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));  // 4 / 8 
//	printf("%d\n", sizeof(&arr + 1));// 4 / 8
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 / 8 �ڶ���Ԫ�صĵ�ַ
//	
//	printf("%d\n", strlen(arr));// 6 ��Ԫ�ص�ַ
//	printf("%d\n", strlen(arr + 0));// 6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5                                                                                                                                                                                                             rlen(&arr[0] + 1));
//	
//	char *p = "abcdef";//�С�\0��
//	printf("%d\n", sizeof(p));// 4 / 8   pΪָ�����
//	printf("%d\n", sizeof(p + 1));// 4/8  p+1���ַ���b���ĵ�ַ
//	printf("%d\n", sizeof(*p));//1   �����÷���һ���ֽ�
//	printf("%d\n", sizeof(p[0]));// 1    p[0]=*(p+0)
//	printf("%d\n", sizeof(&p));// 4 / 8
//	printf("%d\n", sizeof(&p + 1));// 4 / 8
//	printf("%d\n", sizeof(&p[0] + 1));//  4/8  b�ĵ�ַ
//	
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ  ����������ֵ�޹�ϵ  ���������4����Ϊ����ȷ��p�Ǹ���ַ����û��'\0'
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 3*4*4=48  ��������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//4  ��һ��intԪ��
//	printf("%d\n", sizeof(a[0]));//a[0]ʵ��Ϊ��һ�е���������4*4=16
//	printf("%d\n", sizeof(a[0] + 1));// 4 / 8  ��ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));// 4 / 8 a��Ϊ��ά���������������û��&��Ҳû�е�������sizeof�ڲ�����ô������a������Ԫ�أ���һ�У��ĵ�ַ  ����a+1���ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));// 16  �ڶ��еĴ�С  *��a+1��=a[1] �ڶ�����������������sizeof�ڲ�
//	printf("%d\n", sizeof(&a[0] + 1));// 4 / 8    ȡ����һ�еĵ�ַ+1������һ��ָ��ڶ��е�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//  16  ȡ����һ�еĵ�ַ+1������һ��ָ��ڶ��е�ַ�������ý���ǵڶ��еĴ�С 
//	//*(&a[0] + 1)�ȼ���*(a + 1)
//	printf("%d\n", sizeof(*a));//16  ��һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16  sizeof�ڲ����ʽ�����������Բ�����Խ��   ֻҪ��ȷ���;Ϳ���
//	return 0;
//}

//����һЩָ�������

//������1��
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);
//
//	printf("%d %d", *(a + 1), *(ptr - 1));// 2 5
//	return 0;
//}

//������2��
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵλ0x100000
//int main()
//{
//	p = (struct Test *)0x100000;
//
//	printf("%p\n", p + 0x1);//0x100000+20
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+8
//	printf("%p\n", (unsigned int *)p + 0x1);//0x100000+4
//	return 0;
//}

//������3��
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4   2000000
//	return 0;
//}

//������4��
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//������С����()������ֻ�Ǳ��ʽ���������Ƕ��ű��ʽ������ֻ������һ��ֵ1 3 5
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//����5��
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//����6��
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int*)(*(a + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//}

//����7��
int main()
{
	char *a[] = { "work","at","alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);//at
	return 0;
}

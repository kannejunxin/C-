#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<assert.h>


//int main()
//{
//	//ָ������ - ���ָ�������
//	int * arr[5];
//	//����ָ�� - ָ�������ָ��
//	int data[10] = { 0 };
//	int(*ptr)[10] = &data;
//
//	return 0;
//}


//int main()
//{
//	//һά����
//	int arr[10];
//	int * p = arr;//��Ԫ�ص�ַ
//	int(*pa)[10] = &arr;//����ĵ�ַ
//
//	//��ά����
//	int data[3][4];
//	int(*pd)[4] = data;//��Ԫ�ص�ַ
//	int(*p2)[3][4] = &data;//����ĵ�ַ
//
//	return 0;
//}


//����ָ�� - ָ������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test(char *str)
//{
//
//}
//int  main()
//{
//	//printf("%p\n", &Add);
//	int (*pf)(int, int) = &Add;//����ָ��
//	//void(*pc)(char *) = &test;
//	//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//�������һ��  �����������������д�����𣬵������Ǻ���
//	//��������һ���� ��Ϊ����û����Ԫ�صĵ�ַ
//
//	//����int (*pf)(int, int) = &Add;
//	//����д��int (*pf)(int, int) = Add;
//
//	int ret=(*pf)(2, 3);//�൱��int ret=Add(2, 3);
//	printf("%d\n", ret);
//	//���������*�Ǹ����裬������*һ��Ҫ���ϣ�*��
//	//����д��
//	int ret = pf(2, 3);
//	return 0;
//}



//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int (*pf)(const char *) = my_strlen;
//	int len = my_strlen(arr);
//	int len2 = (*pf)("bit");
//	int len3 = pf("hi boy");
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	return 0;
//}

//��������

//(*( void(*)() )0 )()
//��0ǿ������ת������ָ�룬Ȼ���ٵ���0��ַ���������ú����޲���������void

//void ( *signal( int , void(*)(int) ) )(int)
//����ָ��Ƕ�ף�signal�����к���ָ�룬��������Ҳ�Ǻ���ָ�� 

//���Լ�
//typedef void ( *pfun_t)(int)
//��void ( *)(int) ��һ���������� pfun_t
//pfun_t signal( int , pfun_t);


//����ָ������  ���� ��ź���ָ�������


//������ָ������Ϊ��  -- �������ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int *arr[] = { &a,&b };//����ָ������
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };//����ָ������
//	return 0;
//}


//������  �ӡ������ˡ���

//#include<stdio.h>
//
//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�������\n");
//			break;
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//���������Ĵ�����Եù����߳�
//�Ľ�
#include<stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	//����ָ�������  - ��������ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };//��ŵ�ַ
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if(input>=1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}



//ָ����ָ�������ָ�� - ����ȡ�����������ĵ�ַ
//int main()
//{
//	//����ָ��
//	int(*p)(int, int);
//	//����ָ�������
//	int(*pArr[4])(int, int);//����������
//
//	int(*ppArr[4])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[4])(int, int)= &ppArr;//����Ϊָ��
//
//
//	return 0;
//}

//�ص�����
//����������test1()���ǻص�������ͨ��test2���ã��ص�����Ҫ��������һ�����ã�test2()��������һ����
//void test1()
//{
//	printf("hhh\n");
//}
//void test2(void(*p)())
//{
//	p();
//}
//int main()
//{
//	test2(test1);
//	return 0;
//}


//�ֻ���,�������������Ҳ�ǻص�����
#include<stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*p)(int, int))
//{
//	int x = 0, y = 0, ret = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�������\n");
//			break;
//		case 1:
//			calc(Add);
//		case 2:
//			calc(Sub);
//		case 3:
//			calc(Mul);
//		case 4:
//			calc(Div);
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//qsort ����������
//����MSDN qsort������ʽΪ
//void qsort( void *base, 
//			  size_t num, 
//			  size_t width, 
//			  int (__cdecl *compare )(const void *elem1, const void *elem2 ) )
// int (__cdecl *compare )(const void *elem1, const void *elem2 )��һ������ָ�룬�������ȽϷ�����Ҫ�Լ�����
//�������ֵ����Ҫ��ģ�e1>e2���ش���0����֮����С��0�������ڷ���1
//qsort �����������õ��˻ص�����

#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void*e1, const void*e2)//�����Ƚ�
//{
//	//���ﲻ�ܶ�void*��ָ�������
//	//��void*���Խ����������͵ĵ�ַ
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	//�������������ַ����Ƚ�
//	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	int arr[] = { 1,5,3,10,12,7,9,869 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	//ʹ��qsort����ṹ��
//	//������
//	struct Stu prr[] = { {"ZHANGSAN",20},{"LISI",31},{"WANGWU",15} };
//	sz = sizeof(prr) / sizeof(prr[0]);
//	qsort(prr, sz, sizeof(prr[0]), cmp_stu_by_age);
//	//������
//	qsort(prr, sz, sizeof(prr[0]), cmp_stu_by_name);
//	return 0;
//}



//���տ�������дһ��ð��������������������͵�����

#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void _swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		/*һ��һ���ֽڽ�����������width��С�����൱�ڽ�����Ԫ�ؽ���*/
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		/*��������Ԫ�رȽ�*/
//		/*base[j]   base[j+1]*/
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			/*��������˳���򽻻�*/
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int cmp_string(const void *e1, const void *e2)
//{
//	strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu prr[] = { {"ZHANGSAN",15},{"LISI",20},{"WANGWU",30} };
//	int sz = sizeof(prr) / sizeof(prr[0]),i;
//	bubble_sort(prr, sz, sizeof(prr[0]), cmp_string);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d", prr[i].name, prr[i].age);
//		printf("\n");
//	}
//	return 0;
//}
//

//�ַ�������
void leftRound(char *p, int k)
{
	int i, j;
	char tmp;
	int len = strlen(p);
	for (i = 0; i < k; i++)
	{
		tmp = p[0];
		for (j = 0; j < len-1 ; j++)
		{
			p[j] = p[j + 1];
		}
		p[j] = tmp;
	}
}
int main()
{
	char a[100];
	int k;
	char * p;
	p = a;
	printf("�������ַ���:>\n");
	gets(a);
	printf("����������K�ĸ���:>\n");
	scanf("%d", &k);
	leftRound(p, k);
	printf("%s", p);
}
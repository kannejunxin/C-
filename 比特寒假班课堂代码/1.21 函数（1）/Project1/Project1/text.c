#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



//��ϰ1��ʵ�ֺ����ж�year�ǲ������ꡣ
//void is_yaear(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		printf("������\n");
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int year;
//	void is_yaear(int year);
//	printf("��������Ҫ�ж��Ƿ�Ϊ��������\n");
//	scanf("%d", &year);
//	is_yaear(year);
//	return 0;
//}
//
//



//��ϰ2��ʵ��һ���������ж�һ�����ǲ������������ú�����ӡ100��200֮���������
//int is_Prime(int n)
//{
//	int i;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (i > sqrt(n))
//		return 1;
//}
//int main()
//{
//	int i;
//	int is_Prime(int n);
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 2 == 0)
//			continue;
//		else
//		{
//			if (is_Prime(i))
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��ϰ3��ʵ��һ�������������������������ݡ�
//void my_swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//}
//int main()
//{
//	int a, b;
//	void my_swap(int a, int b);
//	printf("��������������:\n");
//	scanf("%d%d", &a, &b);
//	printf("������������������:\n");
//	my_swap(a, b);
//	return 0;
//}



//��ϰ4��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ�� �磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//void my_print(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int a;
//	void my_print(int n);
//	printf("��������Ҫ��ӡ�˷��ھ��������:\n");
//	scanf("%d", &a);
//	my_print(a);
//	return 0;
//}


//������ʲô��
//������һ�����ͳ����е�ĳ���ִ��룬��һ���������飨�����ţ���ɣ�������ĳ���ض�����

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//�⺯����
//Ƶ��������ʹ��ĳһ���ܣ�����Ϊ��ͳһ��Ϊ��һ�����ṩ�ض��ĺ���ʵ��
//
//IO����
//�ַ�����������
//�ַ���������
//�ڴ��������
//����/ʱ�亯��
//��ѧ����
//�����⺯��

//����cplusplus��վ��MSDN�����ѧϰ�⺯��


#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "xxxxxxxxx";
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//int get_max(int x, int y)
//{
//	int z = (x > y) ? (x) : (y);
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//}

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ���������� a��b;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	return 0;
//}
//��ֵ����
//���������޷������ģ���Ϊ�β�ֻ��ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ�Σ�Ӧ����ָ��
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ���������� a��b;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	return 0;
//}
////��ַ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int * pa = &a;
//	int * pb = &b;
//	text(pa, pb); //��ֵ ��Ϊ��ʹ��ָ����������Ǵ�pa pb����
//	text2(&pa, &pb);//��ַ 
//}
//���Լ�ʹ��ָ��Ҳ�п����Ǵ�ֵ


//дһ������ ʵ������������ֵ�Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)//arr��������Ԫ�ص�ַ
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//����Ͳ���Ҫbreak�ˣ���Ϊreturn���ܱ�breakǿ��return����ͽ�����
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//�ҵ������±꣬�Ҳ�������-1
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�С���ǣ�%d\n",ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ�����������num��ֵ��һ
//Add(int * p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
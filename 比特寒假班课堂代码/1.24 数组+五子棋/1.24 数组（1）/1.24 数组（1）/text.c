#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����Ĵ���
//int main()
//{
//	int arr[10] = {0};
//	char ch[5 + 5] = { 0 };//[]��Ҫ���� �������Ա���������c99��׼�µı���������
//	return 0;
//}
//һά�����ʼ��
//int main()
//{
//	int arr1[10] = { 1 };//����ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr3[10] = { 0 };
//	int arr4[] = { 0 };//һ��Ԫ��
//	char ch[10] = { 0 };
//	char ch2[10] = { 'a','b','c' };
//	char ch3[] = "abc";
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//4��Ԫ�� ,'\0'
//	char arr2[] = { 'a','b','c' };//3��Ԫ��
//	return 0;
//}

//һά�����ʹ��(����)
//int main()
//{
//	char arr[] = { 'b','i','t' };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int*p = arr;//������-������Ԫ�صĵ�ַ
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p <============> %p\n",i ,&arr[i],p+i);
	}
	//p+i --- ������arr���±�Ϊi��Ԫ�صĵ�ַ�����Կ���ʹ��ָ��P��������
	return 0;
	//�������ڴ���������ţ����������±���������ַ�ɵ͵��߱仯
}

//int main()
//{
	//��ά����ĳ�ʼ��
	/*int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10};*/
	//int arr[3][5] = { {1,2,3,4},{5,6,7,8},{9,10} };
	//int arr[][5] = { 1,2,3,4,5,6,7,8,9,10 };
	/*int arr[5][];*///����
	
	//��ά�����ʹ��/����
	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	putchar('\n');
	//}
	//return 0;
//}


//��ά����ĵ�ַ
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//ð��������������
//void bubble_sort(int arr[],int sz)//sz�������������������sz��Ԫ�ظ���
//{
//	int i, j,temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{//ÿһ�˽���sz - 1 - i�����
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////�Ż�
//void bubble_sort(int arr[], int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])//��ÿһ�˶�����ǰһ��Ⱥ�һ���Ͳ������if��䣬flag�Ͳ���仯
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//ð��˼�룺��������Ԫ�رȽ�
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 },i;
//	//��С��������
//	//n��Ԫ�ؽ���n-1��ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//������
//��������������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	
//	//��������������:
//	//һ
//	printf("%d\n", sizeof(arr));//��ʱ��ʾ�������� 4*10=40
//	//��
//	//&arr,��ʱarrҲ��ʾ��������
//	
//	return 0;
//}


//��ϰ
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#define A 10
//void init(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[A], i;
//	printf("init() ��ʼ������Ϊȫ0\n");
//	init(arr,A);
//	printf("print()��ӡ�����ÿ��Ԫ��\n");
//	Print(arr, A);
//	printf("���������ÿ��Ԫ��\n");
//	for (i = 0; i < A; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("print()��ӡ�����ÿ��Ԫ��\n");
//	Print(arr, A);
//	printf("reverse()�����������Ԫ�ص����ú���print()��ӡ�����ÿ��Ԫ��\n");
//	reverse(arr, A);
//	Print(arr, A);
//	return 0;
//}

//��ϰ
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i,tmp=0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int B[10] = { 1,5,9,6,3,2,4,7,8,20 };
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	putchar('\n');
//	Swap(A, B, sz);
//	printf("������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}
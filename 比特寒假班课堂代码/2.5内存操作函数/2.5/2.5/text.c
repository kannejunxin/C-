#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//�ڴ��������

//memcpy -�ڴ濽��  ��׼�涨memcpy��������ʵ���ص����� ������vs��memcpy��������
//ģ��ʵ��
void* my_memcpy(void*dest, void*src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		//����
		//++(char*)dest   ++(char*)src
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,5 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 16);//��arr1�е�1 2 3 4����arr2
	my_memcpy(arr2, arr1, 16);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
//
//
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//}
//


////ģ��ʵ��memmove����
////memmove�ڿ�����ʱ����ʱ���ǰ��󿽱�����ʱ��Ӻ���ǰ����

//my_memmove(void*dest, void*src, size_t count)
//{
//	 void*ret = dest;
//	//dest����src��ߣ���ǰ���
//	//dest����src�ұ� �Ӻ���ǰ
//	if (dest < src)
//	{
//		//��ǰ���
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//
//	//	//�뽫1 2 3 4 �ŵ� 3 4 5 6
//	//	//��ʵ���Ͽ������ˣ���Ϊ 3 4 ������!!!!
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]),i;
//	//	my_memcpy(arr+2, arr, 16);//������
//	//memmove����
//	//memmove(arr + 2, arr, 16);
//	my_memmove(arr + 2, arr, 16);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memcmp �ڴ�Ƚ�


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,6,7 };
//	int ret1 = memcmp(arr1, arr2, 8);//�Ƚ�arr1��arr2��ǰ8���ֽ�
//	int ret2 = memcmp(arr1, arr2, 9);//�Ƚ�arr1��arr2��ǰ9���ֽ�
//
//	printf("%d %d\n", ret1,ret2);
//}


//memset

//int main()
//{
//	char arr[10] = { 0 };
//	memset(arr, '*', 10);
//
//	//����memset�����׳���,memset�����ֽ�Ϊ��λ�޸�
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	return 0;
//}
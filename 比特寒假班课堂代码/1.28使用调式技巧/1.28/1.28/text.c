#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʹ�õĵ�ʽ����


//Debug��ʽ�汾
//Release�����汾
//���� F5 F9 F10 F11 CTRL+F5
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int ret = Add(2, 3);
//	return 0;
//
//}

//F10 �����ʽ�󣬻��õ�ʽ����
//�鿴������ֵ : ����  �Զ�����  �ֲ�����
//�鿴�ڴ�
//�鿴���ö�ջ
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//���ö�ջ��
//��ջ <==>  ջ
//��     ջ  �Ƿֿ���



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��1!+2!+3!+......+n!�Ľ׳�
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�ᷢ���д��󣬵�ʽһ�¿�����ȷ���ܵ�retλ�ó���
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��1!+2!+3!+......+n!�Ľ׳�
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����ѭ����Ҫ��ʽ����������������߼�
//�ᷢ�������Խ�磬���ǵ�arr[12]��ʱ��ȡarr[12]�ĵ�ַ���ᷢ�ֺ�i�ĵ�ַһģһ�����൱�ڰ�i��Ϊ0��������ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//��ʵ�ϣ�i��arr���Ǿֲ��������������ڴ��ջ���ϵ�
//ջ���ڴ��ʹ��ϰ�ߣ���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�,����������
//���Ե������ʵ�Խ�������£��ͻᵼ��Խ�磬�ͻ�Խ����ʵ�ѭ������i,�ı�i,�Ϳ��ܵ�����ѭ��
//��Ȼ��Ҳ����Ϊi��arrǰ�洴��������i����ڱȽϸߵ�ַλ�����Կ��Է���arr���洴��
//��Ȼ��Ҳ����Ϊ��VS��������i��arr�м��2���ڴ浥Ԫ������ǱȽ��ϰ汾�ı�����������VC6.0���߻������
//����Debug�汾����release�汾�л�Դ����Ż�
//������Ա��release�汾���о���Ա��debug�汾�����������п��ܻ��г���
//release�汾�����Ե�ʽ


//��ϰ �� 1.�˽�strcpy����
#include<string.h>
//int main()
//{
//	char arr1[20] = "XXXXXXXXX";
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//2.ģ��ʵ��

//void my_strcpy(char* dest, char*src)//ԭ���飬Ŀ������
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// �Ż�
//void my_strcpy(char* dest, char*src)//ԭ���飬Ŀ������
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//���Ż�
//void my_strcpy(char* dest, char*src)//ԭ���飬Ŀ������
//{
//	while (*dest++ = *src++)//'\0'ascii��ֵΪ0
//	{
//		;
//	}
//}
//�����Ż�
#include <assert.h>
//assert-����-�����еı��ʽΪ�棬ʲô���������������еı��ʽΪ�٣��ͻᱨ�����Ҷ�λ�������
//void my_strcpy(char* dest, char*src)//ԭ���飬Ŀ������
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "qqqqqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�������my_strcpyʵ����ʽ���� �����Է���dest��Ԫ�ص�ַ

//Ϊ�˷�ֹ����src���޸ģ�������const���� char * src  ��� const char *src


//const ����ָ�����
//int main()
//{
//	const int num = 10;
//	const int n = 10;
//	const int *p = &num;
//	*p = 20;//err
//	p = &n;
//	//const ����ָ�룬����*��ߣ����ε���ָ��ָ������ݣ�ʹ��ָ��ָ������ݣ�����ͨ��ָ��ı�
//	//����ָ����������ǿ����޸ĵ�
//	int * const pp = &num;
//	*pp = 20;//����
//	pp = &n;//err
//	//const ����ָ�룬����*�ұ� ���ε���ָ���������ʹ��ָ������������Ա��޸�
//	//����ָ��ָ������ݿ���ͨ��ָ�����ı�
//}









//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("����\n");
//	else
//		printf("С��\n");//���Ϊ���ڣ���Ϊstrlen�����޷�����
//}


//�����Դ���
//int main()
//{
//	printf("haha")
//	return 0;
//}

//�����Դ���
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//����ʱ����
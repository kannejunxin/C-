#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//�ַ���
//int main()
//{
//	//"abc";
//	//"a";
//	//"";
//	//�ַ����飺
//	char arr1[] = "abc";       
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//	char arr4[] = { 'a','b','c',0}; //��ASCII����\0���ַ�0�ȼ�
//	printf("%s\n", arr1);//��ӡabc
//	printf("%s\n", arr2);//��ӡabc+����
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//
//	printf("%d\n", strlen(arr1));// 3 �ַ���������־\0
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	printf("%d\n", sizeof(arr1));//4 ������\0
//	printf("%d\n", sizeof(arr2));//3 ע��sizeof��strlen�ڼ����ַ������ϵ�����strlen����\0�Ż�ֹͣ��sizeof����������
//	return 0;
//	//�ַ����Ľ�����׼\0;
//}
//

//ת���ַ��� \?  \'  \"   \\   \a   \b   \f   \n   \r   \t   \v	\ddd \xdd
//int main()
//{
//	printf("%s\n", "\"");
//	printf("%c\n", '\'');
//	printf("c:\test\test.c\n");
//	printf("c:\\test\\test.c\n");
//	printf("%c\n", '\123'); // 123Ϊ�˽���תΪʮ���ƽ����83 ��83��ASCII����ж�Ӧ���ַ�
//	
//	printf("%c\n", '\x41'); //41Ϊʮ������תΪʮ���ƽ����65 ��65��ASCII����ж�Ӧ���ַ�
//	printf("%c\n", '\x111');//erro ̫��
//	printf("%d\n", strlen("c:\test\328\test.c"));  //���Ϊ14 \32+8 8�����ڰ˽�����

//	printf("%c\n", '\123');//ע�����������������,��ת��ʮ���ƵĹ�����ȥ��������
//	printf("%c\n", 'XNE3');//ע��:��Ϊ��ӡһ���ַ�������ж���ַ���ֻ��ӡ���һλ
//	printf("%c\n", '83');

//  return 0;
//}


//ע��

/**/   //����ע�ͣ�������Ƕ�� 
//    //����ע��

// ѡ��ṹ
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��(1/0)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("��ש\n");
//}

//ѭ���ṹ  for do..while ���潲
//int main()
//{
//	int line=0;
//
//	while (line < 20000)
//	{
//		printf("д���룺%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}


//����
//Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum = %d", sum);
//	return 0;
//}

//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int arr[10] = { 1,2,3 };*///����ȫ��ʼ��
//
//	//����ķ��� �±�
//	printf("%d\n", arr[0]);
//
//	//�������
//	int j = 0;
//	while (j < 10)
//	{
//		printf("%d ", arr[j]);
//		j++;
//	}
//	return 0;
//}

//������ 
//���������� + - * / %
//��λ������ >>������  <<������ �ƶ�������λ
//int main()
//{
//	int a = 12;//12�Ķ�����Ϊ��00000000000000000000000000001100
//	int b = a >> 1; //00000000000000000000000000000110  תΪʮ����Ϊ6
//	int c = a << 1;//00000000000000000000000000011000	תΪʮ����Ϊ24
//	//��ʱ��̸���� ���������б� 
//	printf("%d\n", b);
//	return 0;
//}

//λ������ & ^ | ��������λ
//int main()
//{
//	int a = 5;//0101
//	int b = 3;//0011 
//	int c = a & b;//0001 ȫΪ1��Ϊ1		    ���Ϊ1
//	int n = a | b;//0111 ȫΪ0��Ϊ0		    ���Ϊ7
//	int m = a ^ b;//0110 ��ͬΪ0 ����Ϊ1     ���Ϊ6
//
//}

//  ��ֵ������ += -= /= %= = ..........
// ��Ŀ������ һ��������  �ص㣺�����߼������� sizeof����������������ͳ���   ++    --   ~����λȡ�� & *  ()ǿ������ת��
//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
// ˫Ŀ������ ����������
//�߼������� && || 
//���������� �� Ҳ����Ŀ������

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 10;
//	else
//		b = 20;
//	
//	//�����ֱ�ʾ�ȼ�
//	
//	b = (a > 5 ? 10 : 20);
//}

//���Ų����� ���Ϊ���һ��
//int main()
//{
//	int a = (2, 5, 6, 7, 8);
//	printf("%d", a);
//	return 0;
//}

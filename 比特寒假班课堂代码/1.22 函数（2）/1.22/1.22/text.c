#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������Ƕ�׵��ú���ʽ����
//������Ƕ�׵���
//ע�⺯��������Ƕ�׶��壡
//void new_line() 
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	new_line();
//	putchar('\n');
//	three_line();
//	return 0;
//}

//��ʽ���� ����һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	print("%d", print("%d", print("%d", 43)));// 4321
//	//printf()����ֵ�Ǵ�ӡ�ַ��ĸ�����������󷵻ظ���
//	return 0;
//}


//�����������Ͷ���
#include"add.h"
//int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}


//����������main���棬�ᱨ����ΪAddδ���壨�����ڱ���������ɨ��׶Σ������Ժ�������main����Ҫ������
//����ƽʱ���Ὣ����ֱ�ӷ�ǰ�棬���Ա�������
//���ǽ��빫˾�󣬶��ᴴ��һ��ͷ�ļ������ڴ�ź����������ٴ�һ��.c�ļ���ź������壬��ģ��д


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//�ݹ� 
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//����һ���ݹ飬main���Լ������Լ������ǻᱨ��ջ���

//��ϰ������һ������ֵ(�޷��ţ�,����˳���ӡ����ÿһλ
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//print�������԰�num��ÿһλ��ӡ����Ļ��
//	return 0; 
//}

//�ݹ�Ҫ�����������������������
//�ݹ���ú�Ҫ�ӽ���������
//���Ǽ�ʹ����Ҳ�п���ջ���


//ģ��ʵ��strlen
//�ǵݹ�
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ� �������м����
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);//����++������Ϊ�˽�������д��str+1  1 + my_strlen(str+1)
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	����������Ԫ�ص�ַ
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//��쳲�������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//�õݹ鷽����������ظ�����
//�Ż� ���� ͨ����˵ѭ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}

//��ŵ������





int main()
{

}












//������̨����

//��ϰһ����ӡһ������ÿһλ
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int a;
//	printf("��������Ҫ��ӡÿһλ������\n");
//	scanf("%d", &a);
//	print(a);//��ӡa��ÿһλ
//	return 0;
//}

//��ϰ���ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int P_factorial1(int n)//�ݹ�
//{
//	if (n>1)
//	{
//		return n * P_factorial1(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int P_factorial2(int n)//�ǵݹ�
//{
//	int	X=1, i;
//	for (i = 1; i <= n; i++)
//	{
//		X *= i;
//	}
//	return X;
//}
//int main()
//{
//	int a,Y1,Y2;
//	printf("��������Ҫ��׳˵���\n");
//	scanf("%d", &a);
//	Y1=P_factorial1(a);
//	Y2=P_factorial2(a);
//	printf("�ݹ��ӡa�Ľ׳ˣ�%d\n", Y1);
//	printf("�ǵݹ��ӡa�Ľ׳ˣ�%d\n", Y2);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen1(char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen1(str + 1);
//}
//int my_strlen2(char *str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *p = "abcdefg";
//	int len1 = my_strlen1(p);
//	int len2 = my_strlen2(p);
//	printf("�ݹ飺%d\n", len1);
//	printf("�ǵݹ飺%d\n", len2);
//	return 0;
//}


//��ϰ
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//reverse_string(char * string)
//{
//	char * left = string;
//	char * right = string + strlen(string) - 1;
//	while (left<right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("������arr������Ϊ:%s", arr);
//	return 0;
//}

//��ϰ
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int a,x;
//	printf("������һ���Ǹ�����a\n");
//	scanf("%d", &a);
//	x=DigitSum(a);
//	printf("�����������֮��Ϊ%d", x);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//my_Pow(int n, int k)
//{
//	if (k != 1)
//		return n * my_Pow(n, k - 1);
//	else
//		return	n;
//}
//int main()
//{
//	int a,k,x;
//	printf("������һ���Ǹ�����a�Լ�����η�K\n");
//	scanf("%d%d", &a, &k);
//	x = my_Pow(a,k);
//	printf("%d��%d�η�ΪΪ%d", a, k, x);
//}

//��ϰ���ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//int fib1(int n) //�ݹ�ķ���
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib1(n - 2) + fib1(n - 1);
//}
//int fib2(int n) //�ǵݹ�ķ���
//{
//	int s = 1;
//	int a = 1, b = 1;
//	while (n>2)
//	{
//		s = a + b;
//		a = b;
//		b = s;
//		n--;
//	}
//	return s;
//
//}
//int main()
//{
//	int a, x1,x2;
//	printf("��������Ҫ��ڼ���쳲�������\n");
//	scanf("%d", &a);
//	x1 = fib1(a);
//	x2 = fib2(a);
//	printf("��������Ҫ���%d��쳲�������ֵΪ���ݹ鷨��%d,�ǵݹ鷨��%d\n",a,x1,x2);
//	return 0;
//}
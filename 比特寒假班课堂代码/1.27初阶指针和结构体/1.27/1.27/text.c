#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int * p = &a;//ָ����� ��a���׵�ַ
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int * p = &a;
//	*p = 0;
//	//��p������ָ���ʱ�򣬽����÷���4���ֽڵĿռ�
//	a = 0x11223344;
//	char *pa = &a;
//	*pa = 0;
//	//��p���ַ���ָ���ʱ�򣬽����÷���1���ֽڵĿռ�
//	return 0;
//	//��ʽ����-����-�ڴ����ֱ�ۿ�������
//	//ָ�����͵ĵ�һ�����þ��Ǿ����������ʱ���Է��ʶ��ٸ��ֽ�
//	//int* ----4
//	//char*----1
//	//short*---2
//	//double*-----8
//}

//int main()
//{
//	int arr[100] = { 0 };
//	int* pa = arr;
//	char*pc = arr;
//	printf("%p\n", arr);
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	//��ӡ��������һģһ��
//	//��ָ�������������ͬ���ǿ��Դ��
//	printf("----------------------\n");
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("----------------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//ָ�����;���ָ��+/-1���߶�����
//
//	return 0;
//}


//�������ӿ������õ�����
//int main()
//{
//	int arr[10] = { 0 };
//	char*pc = arr;//ÿ�η���һ���ֽ�
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pc + i) = 'x';
//	}
//	//int *pc = arr;//ÿ�η����ĸ��ֽڣ��պ���arrÿ��Ԫ�ض�Ӧ��
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//
//	//	*(pc + i) = i;
//	//}
//	return 0;
//}



//Ұָ��
//test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*pa=test();//
//	printf("hehe\n");
//	printf("%d\n", *pa);//����ģ���Ϊ����ִ�������ͷţ���ʱpΪҰָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	//Խ����ʵ���Ұָ�������
//	for (i = 0; i < 11; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int *q = NULL;//���ڲ�ȷ��ָ���Ǹ�����ʱ�ÿ�
//	//ָ��NULL�Ĳ��ܷ���
//	return 0;
//}


//ָ�������
//ָ��+-����
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;//++��*���ȼ���
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//ָ��-ָ��   �ľ���ֵ��ָ����ָ��֮��Ԫ�ظ���
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//ָ��-ָ�� ǰ������������ָ��ָ��ͬһ��������ַ
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &ch[3]);
//	return 0;
//}

//ָ��-ָ����ϰ  ֮ǰ�ù����������ݹ���������
//int my_strlen(char * str)
//{
//	char *start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�����ָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 }, i;
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]= %p <====> p+%d=%p \n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int** pp=&p;
//	**pp = 20;
//	printf("%d\n", a);
//	return 0;
//}

//ָ������
//��ָ��ΪԪ�ص�����
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 'a','b' };
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3]={&a, &b, &c};//ÿ��Ԫ������Ϊint*
//}

//int main()
//{
//	char*p = "ABCDEF";//���ַ������ַ���ַ����p
//	printf("%s\n", p);
//	char * arr[] = { "abcef","helo","bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//�ṹ��
//����ѧ��
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tale[12];
//	char sex[5];
//};
//
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tale[12];
//	char sex[5];
//}s1,s2;
////���ﴴ����s1,s2������ȫ�ֵ�
//int main()
//{
//	struct stu s;
//	//���ﴴ�����Ǿֲ�
//	struct stu s1;
//	struct stu s2;
//	
//	return 0;
//}

//�����ṹ����������
//struct point
//{
//	int x;
//	int y;
//
//};
//struct S
//{
//	char arr[10];
//	struct point p;
//	double d;
//	int *ptr;
//};
//int main()
//{
//	struct point p = { 1,2 };
//	printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//	struct S s = { "abcef",{2,3},3.14,&a };
//	printf("%s %d %d %lf\n", s.arr, s.p.x, s.p.y, s.d);
//	return 0;
//}

//�ṹ�崫��
struct S
{
	char arr[1000];
	int num;
	double d;
};
void print1(struct S ss)//��ֵ
{
	printf("%s %d %lf", ss.arr, ss.num, ss.d);
}

//print2�����˵�ȽϺã���Ϊ�ռ�print1��ʱ���ٵĿռ��ǽṹ��Ĵ�С�����ṹ��ܴ���ô����ɿռ��˷�
void print1(struct S* ps)//��ַ
{
	printf("%s %d %lf", ps->arr, ps->num, ps->d);
}
int main()
{
	struct S s = { "hello bit",100,3.14 };
	print1(s);//��print������ӡ�ṹ������
	print2(&s);
	return 0;
}
//��ϰ���жϽ��
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}

//��ϰ��дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//void print(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr);
//}

//дһ����������������һ���ַ��������ݡ�
//void Reverse(char * p,int n)
//{
//	char temp;
//	int left = 0;
//	int right = n - 2;
//	while (left<=right)
//	{
//		temp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "I am a student";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ:%s\n", arr);
//	Reverse(arr,sz);
//	printf("�����:%s\n", arr);
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
//int main()
//{
//	int a,i=1;
//	int sum = 0,temp=0;
//	printf("������a��ֵ\n");
//	scanf("%d", &a);
//	while (i<=5)
//	{
//		temp = temp * 10 + a;
//		sum += temp;
//		i++;
//	}
//	printf("Sn��ֵΪ:%d", sum);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		int temp = i, n = 0, sum = 0;
//		/*�õ�λ��*/
//		while (temp)
//		{
//			n++;
//			temp = temp / 10;
//		}
//		/*��֤�Ƿ�Ϊˮ�ɻ���*/
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp=temp / 10;
//		}
//		if (i == sum)
//			printf("%d ", sum);
//	}
//	return 0;
//}


//��ӡ����
//int main()
//{
//	int i, j;
//	char arr[13][13] = { 0 };
//	//�ȳ�ʼ��
//	for ( i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	//Ȼ��ֵ
//	for (i = 0; i < 13; i++)
//	{
//		if (i < 7)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				arr[i][6 - j] = '*';
//				arr[i][6 + j] = '*';
//			}
//		}
//		else
//		{
//			for ( j = 0; j <= i-(i-6)*2; j++)
//			{
//				arr[i][6 - j] = '*';
//				arr[i][6 + j] = '*';
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int a, x, y; //aΪǮ����xΪ����ˮ������yΪ��ƿ
//	scanf("%d", &a);
//	x = a;
//	y = x;
//	while (y!=0 && y!=1)
//	{
//		x += y / 2;
//		if (y % 2 == 0)
//		{
//			y = y / 2;
//		}
//		else
//		{
//			y = y / 2 + y % 2;
//		}
//	}
//	printf("%d", x);
//}
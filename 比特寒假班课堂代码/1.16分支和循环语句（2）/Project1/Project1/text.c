#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//if������:
//int test()
//{
//	//����һ  ���ײ���������Ϊ���᷵��y
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;
//	return y;
//	
//	//���ζ�
//	int x = 10;
//	int y = 20;
//	if (1)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}

//	if(5==num)
//  if(num==5)
//����Ĵ�����ȽϺã���Ϊ�����׽�����д�ɸ�ֵ���߼�������

//��ϰ��1.�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}

//��ϰ��2.���1~100������
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//switch���

//�ж����ڼ���
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//day����Ϊ���α��ʽ
//	{
//	case 1://1���������γ������ʽ���ַ�����ASCII��Ҳ������
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//�жϹ����ջ�����Ϣ�գ�
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//day����Ϊ���α��ʽ
//	{
//	case 1://1���������γ������ʽ���ַ�����ASCII��Ҳ������
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}	
//	return 0;
//}



//ѭ�����

//while ѭ��
//int main()
//{
//	while (1)
//		printf("haha\n");
//	
//	return 0; //��ѭ��
//}


//��ӡ 1~10
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//
//while ��break����
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ",i);//��ӡ 1 2 3 4
//		i++;
//	}
//	return 0;
//}
//
//while ��continue����,��ֹ����ѭ��
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ",i);//��ӡ1 2 3 4 Ȼ��GG����ѭ����
//		i++;
//	}
//	return 0;
//}


//����while����һ�����ô���
//int main()
//{
//	int ch = 0;
//	//getchar()�����Ǵӱ�׼���루���̣���ȡһ���ַ�������ASCII������ch��������int char�����ԣ����Ƕ�ȡʧ��ʱ����EOF����EOF������-1������Ҫ��int
//	//EOF�ļ�������־ ����getchar()��ȡʧ���Ƿ���EOF������ctrl+z��getchar()��ȡʧ��
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//���������ֵ��
//int main() //���к�ᷢ�֣���������������룬��û����ȷ����һ�����������ȷ��ʧ�ܣ�
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//�������Ϊ�����뻺�������Ա���'\n'�ᱻgetchar()��ȡ
//����������������뻺����
//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//��ʵ����д��������Ĵ���ʱ��gets()���� ��ȡһ��



//for ѭ��

//����while��for����֮��
//int main()
//{
//	int i = 0;//ѭ���ĳ�ʼ������ 
//	while (i<100)//ѭ�����жϲ���
//	{
//		//......
//		i += 2;//ѭ���ĵ�������
//	}
//	//�ɼ�forѭ���ĳ�ʼ�����жϣ�����������һ����
//	for (i = 0; i <= 10; i++)
//	{
//		//....
//	}
//
//	return 0;
//}



//��forѭ����continue break������
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	putchar('\n');
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//��for�в�����ѭ��
//	}
//	return 0;
//}

//forѭ��������Ҫ��ѭ�����ڸı�ѭ������

//forѭ���ı���

//int main()
//{
//	//����һ
//	//for (;;)//forѭ����3�����־�����ʡ�ԣ��жϲ������ʡ�Ա�ʾ��Ϊ��
//	//	printf("haha\n");//��ѭ����ӡ
//
//	int i = 0;
//	int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	//���Ǳ�Ҫ������ʮ����Ϥ����Ҫ�������
//	
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		//.......
//	}
//	return 0;
//
//}


// do ...while ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		print("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//do ...while ѭ���е�break continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		print("%d", i);
//		i++;
//	} while (i <= 10);
//	i = 1;
//	puthcar('\n');
//	do
//	{
//		if (i == 5)
//			break;
//		print("%d", i);//1~4Ȼ����ѭ��
//		i++;
//	} while (i <= 10);
//	
//	return 0;
//}


//��ϰ������n�Ľ׳�
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
}

//���㣺 1!+2��+3��+........+10!
//��һ��
//int main()
//{
//	int n = 1, i = 1,ret = 1, sum = 0;
//	for (; n <= 10; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//�����Ż�:
//int main()
//{
//	int n = 1, i = 1, ret = 1, sum = 0;
//	for (; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//�����������в��Ҿ����ĳ����
//��һ����������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i = sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//�������۰���� �����ֲ��ң� ���Ҫ����log��2Ϊ�׵�n�η�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;

//	printf("��������Ҫ���ҵ�����\n");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
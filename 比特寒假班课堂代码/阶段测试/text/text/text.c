#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��һ����A,B��С������
int main1()
{
	unsigned int a = 0; unsigned int b = 0;
	scanf("%d%d", &a, &b);
	//min���趨����С������
	int min = a > b ? a : b;
	while((min%a != 0) || (min %b != 0))
	{
		min++;
	}
	printf("%u", min);
	return 0;
}

//���� 
//�������Լ��c  ����󹫱���a = (A*B) / c

//����
int main2()
{
	unsigned int a = 0; unsigned int b = 0;
	scanf("%d%d", &a, &b);
	int i = 1;
	//min���趨����С������
	while (a*i % b !=0)
	{
		i++;
	}
	printf("%u", a*i);
	return 0;
}



//��� ��һ�仰�ĵ��ʽ��е��ã���㲻����  ����I like Beijing.  �õ� Beijing. like I
void reverse(char*left, char*right)//���������ַ����ĺ���
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main3()
{
	char arr[100] = { 0 };
	gets(arr);//gets���Զ�ȡһ�� ���ں��ո�
	//1.˼·�����ַ�������
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.�ַ����е�ÿһ����������
	char*start = arr;
	char*end = arr;
	while (*end)
	{
		end = start;
		while (*end != ' ' && *end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		/*if (*end == ' ')*/
			start = end + 1;
	/*	else
			start = end;*/
	}
	printf("%s", arr);
	return 0;
}
//strtok
int main()
{
	char  arr[100] = { 0 };
	gets(arr);//gets���Զ�ȡһ�� ���ں��ո�
	char *s = " ";
	char *str = NULL;
	for (str = strtok(arr, s); str != NULL; str = strtok(NULL, s))
	{
		printf("%s ", str);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//malloc
//calloc
//realloc
int main1()
{
	int arr[10] = { 0 };
	//��ջ����������40���ֽڵĿռ�

	//��̬�����ڴ� ���ڶ���������ռ�
	int*p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("�ڴ濪��ʧ��\n");
	}
	else
	{
		//���ٳɹ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = 0;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);
		}
	}
	//��̬�����ڴ�Ļ���
	//1.�ֶ��ͷ�free2.��������������Զ�����
	free(p);
	p = NULL;
	return 0;
}

#include<errno.h>
int main2()
{
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p+i));
		}
		//��Ҫ���ӿռ�
		int*ptr = (int*)realloc(p, 80);
		if (ptr != NULL)
		{ 
			p = ptr;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		//�ͷ�
		free(p);
		p = NULL;
	}
	return 0;
}


//��̬�����ڴ�ĳ�������
//1.��NULLָ�������
//�����ڶ�̬�ڴ濪��ʧ�ܵ�ʱ��

//2.�Զ�̬�����ڴ��Խ�����
int main3()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}

//3.�ԷǶ�̬���ٵ��ڴ�ʹ��free�ͷ�
int main4()
{
	int a = 10;
	int* p = &a;
	free(p);
}

//4.ʹ��free�ͷ�һ�춯̬�ڴ��һ����
int main5()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*p++ = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}

//5.��ͬһ�鶯̬�ڴ����ͷ�
int main6()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		free(p);
		p = NULL;
	}
	return 0;
}

//6.�ڴ�й©  �����ͷ�
//�ڴ�й©����һ��24Сʱ��ͣЪ�ķ�����ʮ�����أ�����һ����10M�ڴ治�ͷţ������ķ������ܼ���ͻ�̱��һ�Σ�̱�������������ã����ܼ����ֻ�̱��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ȽϾ���ı�����

// ����ǳ������� �ڴ�й¶
//��Ҫԭ������GetMemory(str)�Ǵ�ֵ����
//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�
//�������ڴ�й©������
//void GetMemory(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//���
void Test(void)
{
	char * str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	//free��֮��Ҫ��str�ÿ�
	if (str != NULL)//��ʱstr��Ұָ���ˣ����ܿ������У����ǲ��ɷ����Ѿ����ڷǷ������ڴ�
	{
		strcpy(str, "world");
		printf(str);
	}
}


//��������
struct St
{
	int n;
	char c;
	int arr[];//���������Ա
};
int main()
{
	printf("%d\n", sizeof(struct St));
	//�ڼ���������������Ա�Ľṹ���С��ʱ�򣬲��������������Ա
	return 0;
}

//��������ʹ�÷�ʽ

struct S
{
	int n;
	int arr[];//���������Ա
	//����������ָ����Ĵ�С�����Կɱ��
};
int main()
{
	//�����������������Ա�Ľṹ�� ���� struct S s;����������
	struct	S* pc = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int)); //�����10 * sizeof(int)��Ϊarr�����Ŀռ�
	pc->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		pc->arr[i] = i;
	}
	return 0;

}


//���������������һ��ʵ�ַ�ʽ �� ���ǿ��Դﵽ���������Ч��
typedef struct S
{
	int n;
	int *arr;
}S;
int main()
{
	S* ps = malloc(sizeof(S));
	ps->arr = (int*)malloc(10 * sizeof(int));

	return 0;
}


#include<string.h>
#include<errno.h>

int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		printf("%s\n", strerror(errno));
		return 1;
	}

	printf("���ļ��ɹ�\n");
	//��д�ļ�.......

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
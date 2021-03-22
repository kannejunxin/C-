#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* pf=fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д���ļ�
//	fputc('a', pf);
//	//or
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	//or
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	FILE*pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//	//���ļ�
//	fgets(arr, 10, pf);
//	printf("%s\n", arr); 
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main1()
{
	struct Stu s = { "zhangsan",20,66.5f };
	FILE* pf=fopen("data.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//��ʽ��д��
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
	printf("%s %d %f",s.name,s.age,s.score);
	//��ʽ����ȡ
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
int main2()
{
	struct Stu s = {0};
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//��ʽ����ȡ
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f", s.name, s.age, s.score);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}



//sprintf  sscanf
int main3()
{
	struct Stu s = { "Lisi",20,66.8f };
	char buf[200] = { 0 };

	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	printf("�����ַ�������ʽ��%s\n", buf);

	struct Stu tmp = { 0 };
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("���ո�ʽ������ʽ��%s %d %f", tmp.name, tmp.age, tmp.score);
	return 0;
}
//fwrite fread
int main4()
{
	struct Stu s = { "zhangsan",20,99.5f };
	FILE*pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//д�ļ�
	fwrite(&s, sizeof(s), 1, pf);
	//���ļ�
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
int main5()
{
	struct Stu s = {0};
	FILE*pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//���ļ�
	fread(&s, sizeof(s), 1, pf);//sizeof(struct Stu)
	printf("%s %d %f\n", s.name, s.age, s.score);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}

//�ļ��������д
//fseek ftell rewind
int main6()
{
	FILE*pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		return 1;
	}
	int ch = fgetc(pf);//'z'
	printf("%c\n", ch);

	ch = fgetc(pf);//'h'
	printf("%c\n", ch);

	printf("%d\n", ftell(pf));
	//��Ҫ�ٴζ�ȡ'z'
	fseek(pf, -2, SEEK_CUR);//SEEK_CUR ��ʾ���ļ�ָ���λ�ÿ�ʼ
	ch = fgetc(pf);
	printf("%c\n", ch);

	//OR
	fseek(pf, 0, SEEK_SET);//SEEK_SET ��ʾ���ļ���ʼ��λ�ÿ�ʼ
	ch = fgetc(pf);
	printf("%c\n", ch);

	//or
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}


int main()
{
	FILE*pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		return 1;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}
	if (ferror(pf))
	{
		printf("��ȡ��������\n");
	}
	else if (feof(pf))
	{
		printf("��ȡ���ļ�ĩβ\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
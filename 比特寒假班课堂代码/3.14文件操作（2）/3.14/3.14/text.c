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
//	//写入文件
//	fputc('a', pf);
//	//or
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//关闭文件
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
//	//读文件
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	//or
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//关闭文件
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
//	//写文件
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//	//读文件
//	fgets(arr, 10, pf);
//	printf("%s\n", arr); 
//	//关闭文件
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
	//格式化写入
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
	printf("%s %d %f",s.name,s.age,s.score);
	//格式化读取
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	//关闭文件
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
	//格式化读取
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f", s.name, s.age, s.score);
	//关闭文件
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
	printf("按照字符串的形式：%s\n", buf);

	struct Stu tmp = { 0 };
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("按照格式化的形式：%s %d %f", tmp.name, tmp.age, tmp.score);
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
	//写文件
	fwrite(&s, sizeof(s), 1, pf);
	//读文件
	//关闭文件
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
	//读文件
	fread(&s, sizeof(s), 1, pf);//sizeof(struct Stu)
	printf("%s %d %f\n", s.name, s.age, s.score);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}

//文件的随机读写
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
	//若要再次读取'z'
	fseek(pf, -2, SEEK_CUR);//SEEK_CUR 表示从文件指针的位置开始
	ch = fgetc(pf);
	printf("%c\n", ch);

	//OR
	fseek(pf, 0, SEEK_SET);//SEEK_SET 表示从文件起始的位置开始
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
		printf("读取发生错误\n");
	}
	else if (feof(pf))
	{
		printf("读取到文件末尾\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
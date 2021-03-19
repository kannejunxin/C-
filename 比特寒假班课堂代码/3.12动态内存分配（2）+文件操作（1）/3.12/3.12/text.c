#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//比较经典的笔试题

// 结果是程序会崩溃 内粗泄露
//主要原因在于GetMemory(str)是传值调用
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

//修改
//但存在内存泄漏的问题
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

//题二
void Test(void)
{
	char * str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	//free完之后要将str置空
	if (str != NULL)//此时str是野指针了，可能可以运行，但是不可否认已经存在非法访问内存
	{
		strcpy(str, "world");
		printf(str);
	}
}


//柔性数组
struct St
{
	int n;
	char c;
	int arr[];//柔性数组成员
};
int main()
{
	printf("%d\n", sizeof(struct St));
	//在计算包含柔性数组成员的结构体大小的时候，不包含柔性数组成员
	return 0;
}

//柔性数组使用方式

struct S
{
	int n;
	int arr[];//柔性数组成员
	//柔性数组是指数组的大小是柔性可变的
};
int main()
{
	//创建包含柔性数组成员的结构体 不是 struct S s;这样创建的
	struct	S* pc = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int)); //后面的10 * sizeof(int)是为arr创建的空间
	pc->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		pc->arr[i] = i;
	}
	return 0;

}


//创建柔性数组的另一种实现方式 ， 但是可以达到柔性数组的效果
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
		printf("打开文件失败\n");
		printf("%s\n", strerror(errno));
		return 1;
	}

	printf("打开文件成功\n");
	//读写文件.......

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
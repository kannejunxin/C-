//通讯录相关功能的函数实现
#include "contact.h"

//初始化通讯录
void InitContact(struct Contact *pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//数组名单独放在sizeof内部，计算整个数组的大小
}
//添加信息到通讯录
void Addcontact(struct Contact *pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("添加成功\n");
	}
}
//打印通讯录的信息
void Showcontact(const struct Contact *pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("通讯录联系人为空\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
}
//通过名字查找联系人的下标
static int FindByName(const struct Contact *pc, char name[])
{
	int i = 0;
	for (; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
//删除通讯录的一个信息
void Delcontact(struct Contact *pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录联系人为空,无法删除\n");
	}
	else
	{
		//1.找到删除的人 
		printf("请输入要删除人的名字:>");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (-1 == pos)
		{
			printf("删除人信息不存在\n");
		}
		else
		{
			//2.删除
			int j = 0;
			for (j = pos; j < pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}
//查找指定联系人
void SearchContact(const struct Contact *pc)
{
	char name[NAME_MAX];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
			printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}
//修改指定联系人
void ModifyContact(struct Contact *pc)
{
	char name[NAME_MAX];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}
//排序指定联系人
enum Data
{
	NAME=1,
	AGE,
	SEX,
	TELE,
	ADDR
};
void SortByName(struct Contact *pc)
{
	int i = 0,j=0;
	struct PeoInfo temp;
	for (; i < pc->sz ; i++)
	{
		for (j = 0; j < pc->sz - i - 1; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				temp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j+1] = temp;
			}
		}
	}
}
void Sortcontact(struct Contact *pc)
{
	printf("*********************************\n");
	printf("****   1.name       2.age   ****\n");
	printf("****   3.sex        4.tele  ****\n");
	printf("****         5.addr         ****\n");
	printf("*********************************\n");
	int input = 0;
	printf("请问以什么来排序:>");
	scanf("%d", &input);
	switch (input)
	{
		case NAME:
			SortByName(pc);
			Showcontact(pc);
			break;
		case AGE:

			Showcontact(pc);
			break;
		case SEX:

			Showcontact(pc);
			break;
		case TELE:

			Showcontact(pc);
			break;
		case ADDR:

			Showcontact(pc);
			break;
	}
}
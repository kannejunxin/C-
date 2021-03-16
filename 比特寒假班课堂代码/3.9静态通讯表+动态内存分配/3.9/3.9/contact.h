//通讯录相关功能的函数声明
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 1000
//因为这两个结构体可能到处要用到，所以先将其在头文件中声明

//描述一个人的信息的结构体
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX];//开辟1000个struct PeoInfo 大小的空间
	int sz;//通讯录中当前存放的人的信息个数
};

//初始化通讯录函数声明
void InitContact(struct Contact *pc);
//添加信息到通讯录函数声明
void Addcontact(struct Contact *pc);
//打印通讯录的信息函数声明
void Showcontact(const struct Contact *pc);
//删除通讯录的信息函数声明
void Delcontact(struct Contact *pc);
//查找指定联系人
void SearchContact(const struct Contact *pc);
//修改指定联系人
void ModifyContact(struct Contact *pc);
//排序指定联系人
void Sortcontact(struct Contact *pc);

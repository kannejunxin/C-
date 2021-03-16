//测试整个通讯录的逻辑
#include "contact.h"

//静态通讯录   因为要求静态，则用顺序表来写，当然链表比较容易
//用于保存1000个人的信息，每个人的信息包含名字，年龄，性别，电话，住址
//功能：1.增 2.删 3.查 4.改 5.显示通讯录中所有信息 6.排序 7.退出 
void menu()
{
	printf("*********************************\n");
	printf("****   1.add       2.del     ****\n");
	printf("****   3.search    4.modify  ****\n");
	printf("****   5.show      6.sort    ****\n");
	printf("****         0.exit          ****\n");
	printf("*********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
void test()
{
	int input = 0;
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
			switch (input)
			{
			case ADD:
				Addcontact(&con);
				break;
			case DEL:
				Delcontact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SHOW:
				Showcontact(&con);
				break;
			case SORT:
				Sortcontact(&con);
				break;
			case EXIT:
				printf("退出通讯录\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
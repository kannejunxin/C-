//��������ͨѶ¼���߼�
#include "contact.h"

//��̬ͨѶ¼   ��ΪҪ��̬������˳�����д����Ȼ����Ƚ�����
//���ڱ���1000���˵���Ϣ��ÿ���˵���Ϣ�������֣����䣬�Ա𣬵绰��סַ
//���ܣ�1.�� 2.ɾ 3.�� 4.�� 5.��ʾͨѶ¼��������Ϣ 6.���� 7.�˳� 
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
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("�����������������\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
//ͨѶ¼��ع��ܵĺ���ʵ��
#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact *pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//��������������sizeof�ڲ���������������Ĵ�С
}
//�����Ϣ��ͨѶ¼
void Addcontact(struct Contact *pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("��ӳɹ�\n");
	}
}
//��ӡͨѶ¼����Ϣ
void Showcontact(const struct Contact *pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼��ϵ��Ϊ��\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
//ͨ�����ֲ�����ϵ�˵��±�
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
//ɾ��ͨѶ¼��һ����Ϣ
void Delcontact(struct Contact *pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼��ϵ��Ϊ��,�޷�ɾ��\n");
	}
	else
	{
		//1.�ҵ�ɾ������ 
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (-1 == pos)
		{
			printf("ɾ������Ϣ������\n");
		}
		else
		{
			//2.ɾ��
			int j = 0;
			for (j = pos; j < pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}
//����ָ����ϵ��
void SearchContact(const struct Contact *pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
			printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}
//�޸�ָ����ϵ��
void ModifyContact(struct Contact *pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
//����ָ����ϵ��
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
	printf("������ʲô������:>");
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
//ͨѶ¼��ع��ܵĺ�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 1000
//��Ϊ�������ṹ����ܵ���Ҫ�õ��������Ƚ�����ͷ�ļ�������

//����һ���˵���Ϣ�Ľṹ��
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[MAX];//����1000��struct PeoInfo ��С�Ŀռ�
	int sz;//ͨѶ¼�е�ǰ��ŵ��˵���Ϣ����
};

//��ʼ��ͨѶ¼��������
void InitContact(struct Contact *pc);
//�����Ϣ��ͨѶ¼��������
void Addcontact(struct Contact *pc);
//��ӡͨѶ¼����Ϣ��������
void Showcontact(const struct Contact *pc);
//ɾ��ͨѶ¼����Ϣ��������
void Delcontact(struct Contact *pc);
//����ָ����ϵ��
void SearchContact(const struct Contact *pc);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact *pc);
//����ָ����ϵ��
void Sortcontact(struct Contact *pc);

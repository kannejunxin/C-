#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//��ϰ4����ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//sz=strlen(arr1)+1  ע���и�'\0';
//	int left = 0;
//	int right = sz-2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //ͷ�ļ� #include<Windows.h> ����ִ�������д����ֹͣ1000ms.
//		left++;
//		right--;
//		system("cls");//ͷ�ļ� #include<stdlib.h> ���������Ļ.
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��ϰ5��ģ���û���¼�龰
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//������ȷ����Ϊ123456
//		if (strcmp(password, "123456")== 0)//ͷ�ļ�#include<string.h> �����ַ����Ƚϣ���ȷ���0����һ�ַ������ڵڶ��ַ��� ����>0���ַ����Ƚϰ�λ�Ƚ�Ŷ
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//}





//��������Ϸ
//1.���������
//2.�����֣���������ֱ���¶�
//void menu()
//{
//	printf("***************************\n");
//	printf("******** 1. play **********\n");
//	printf("******** 0. exit **********\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;//���ɵ����ֵ0-
//	/*printf("%d",ret);*/
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));/*Ҫ��ӦΪ���ֵ����ʱ���������ʱ�����ǰʱ����������ʼʱ�䣨1970��1��1�գ�8�㣩�Ĳ�ֵ����λ��*/ //ͷ�ļ�#include<time.h>   #include<stdlib.h>
//	do
//	{
//		menu();
//		printf("��ѡ��1/0��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void main(void)
//{
//	int i;
//	srand((unsigned int)time(NULL));
//		for (i = 0; i < 10; i++)
//			printf("%d ", rand());
//	printf("\n\n\n");
//}



//goto���  ע��goto���ֻ���ڱ����������ã������Կ�Խ������
//int main()
//{
//flag:
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}


//����goto���д�ػ�����
//��һ�����ڹػ�
//��һ���������룺����������ȡ���ػ�
//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

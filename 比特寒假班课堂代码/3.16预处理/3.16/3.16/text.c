#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//Ԥ����ָ��

//define �����ʶ��

#define MAX 100
#define STR "HEHE"
#define reg register
#define print printf("hehe\n")
int main1()
{
	printf("%d\n",MAX);
	printf("%s", STR);
	print;
	return 0;
}

//define �����

#define SQUARE(X) X*X

int main2()
{
	printf("%d\n", SQUARE(3));
	return 0;
}

//����ʵ����ʱ��û��û��

int main3()
{
	printf("%d\n", SQUARE(3+2));//�����11������25
	return 0;//��Ϊ�滻���� 3+2*3+2
}
//�������д��#define SQUARE(X) ��X��*��X��

//����Ϊ��û���� �پٸ�����
#define DOU(X) (X)+(X)
int main4()
{
	printf("%d\n", 2*DOU(5));//�����15������20
	return 0;//��Ϊ�滻���� 2*(5)+(5)
}
//�������д��#define DOU(X)  ����X��*��X����



//#

#define print(data,format) printf("the value of " #data "is "format"\n",data)
//#���ý�����ת�����Բ�����Ϊ�ַ������ݵ��ַ���
int main5()
{
	printf("hello world\n");
	printf("hello " "world\n");
	//�����������ַ����ᱻ�ϲ���һ��
}

int main6()
{
	int a = 10;
	printf("the value of a is %d\n", a);
	print(a, "%d");

	int b = 20;
	printf("the value of a is %d\n", b);

	float c = 45.0f;
	printf("the value of a is %f\n", c);

	//���ǻᷢ�ִ����������
	//���Ǿͻ����ú���
	//����C�����еĺ���û��java�е�����
	//������Ԥ����ָ�����
	return 0;
}

//##
//��λ�������ߵķ��źϳ�һ������
#define CAT(X,Y) X##Y
int main()
{
	int Class100 = 2021;
	//˼�뵱���ǰ�Class��100���������ڴ�ӡ�ͻ�õ�2021��
	printf("%d\n", CAT(Class, 100));
	return 0;

}
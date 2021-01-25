#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//练习4：演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//sz=strlen(arr1)+1  注意有个'\0';
//	int left = 0;
//	int right = sz-2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //头文件 #include<Windows.h> 作用执行完上行代码后停止1000ms.
//		left++;
//		right--;
//		system("cls");//头文件 #include<stdlib.h> 作用清空屏幕.
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//练习5：模拟用户登录情景
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//假设正确密码为123456
//		if (strcmp(password, "123456")== 0)//头文件#include<string.h> 作用字符串比较，相等返回0，第一字符串大于第二字符串 返回>0，字符串比较按位比较哦
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//}





//猜数字游戏
//1.生成随机数
//2.猜数字，给反馈，直到猜对
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
//	int ret = rand()%100+1;//生成的随机值0-
//	/*printf("%d",ret);*/
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));/*要求应为随机值，放时间戳！！，时间戳当前时间与计算机起始时间（1970年1月1日，8点）的差值，单位秒*/ //头文件#include<time.h>   #include<stdlib.h>
//	do
//	{
//		menu();
//		printf("请选择（1/0）:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
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



//goto语句  注意goto语句只能在本函数体内用，不可以跨越函数；
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


//利用goto语句写关机程序
//在一分钟内关机
//在一分钟内输入：我是猪，才能取消关机
//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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

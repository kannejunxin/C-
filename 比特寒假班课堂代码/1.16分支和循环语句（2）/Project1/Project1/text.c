#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//if代码风格:
//int test()
//{
//	//情形一  容易产生分歧以为都会返回y
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;
//	return y;
//	
//	//情形二
//	int x = 10;
//	int y = 20;
//	if (1)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}

//	if(5==num)
//  if(num==5)
//上面的代码风格比较好，因为不容易将等于写成赋值，逻辑更清晰

//练习：1.判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}

//练习：2.输出1~100的奇数
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//switch语句

//判断星期几：
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//day必须为整形表达式
//	{
//	case 1://1必须是整形常量表达式，字符换成ASCII码也是整形
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//判断工作日还是休息日：
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//day必须为整形表达式
//	{
//	case 1://1必须是整形常量表达式，字符换成ASCII码也是整形
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}	
//	return 0;
//}



//循环语句

//while 循环
//int main()
//{
//	while (1)
//		printf("haha\n");
//	
//	return 0; //死循环
//}


//打印 1~10
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//
//while 中break作用
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ",i);//打印 1 2 3 4
//		i++;
//	}
//	return 0;
//}
//
//while 中continue作用,终止本次循环
//int main()
//{
//	int i=1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ",i);//打印1 2 3 4 然后GG（死循环）
//		i++;
//	}
//	return 0;
//}


//关于while语句的一个常用代码
//int main()
//{
//	int ch = 0;
//	//getchar()作用是从标准输入（键盘）读取一个字符，返回ASCII码存放于ch，所以用int char都可以，但是读取失败时返回EOF，而EOF本质是-1，所以要用int
//	//EOF文件结束标志 ，当getchar()读取失败是返回EOF，利用ctrl+z让getchar()读取失败
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//上述代码价值：
//int main() //运行后会发现，不论如何输入密码，都没有请确认这一步而是总输出确认失败！
//{
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//这就是因为在输入缓冲区中仍保留'\n'会被getchar()读取
//解决方法：清理输入缓冲区
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//事实上在写输入密码的代码时用gets()函数 读取一行



//for 循环

//看看while和for相似之处
//int main()
//{
//	int i = 0;//循环的初始化部分 
//	while (i<100)//循环的判断部分
//	{
//		//......
//		i += 2;//循环的调整部分
//	}
//	//可见for循环的初始化，判断，调整部分在一行内
//	for (i = 0; i <= 10; i++)
//	{
//		//....
//	}
//
//	return 0;
//}



//在for循环中continue break的作用
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	putchar('\n');
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//在for中不会死循环
//	}
//	return 0;
//}

//for循环尽量不要在循环体内改变循环变量

//for循环的变种

//int main()
//{
//	//变种一
//	//for (;;)//for循环的3个部分均可以省略，判断部分如果省略表示恒为真
//	//	printf("haha\n");//死循环打印
//
//	int i = 0;
//	int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	//若非必要，或者十分熟悉，不要随意更改
//	
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		//.......
//	}
//	return 0;
//
//}


// do ...while 循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		print("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//do ...while 循环中的break continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		print("%d", i);
//		i++;
//	} while (i <= 10);
//	i = 1;
//	puthcar('\n');
//	do
//	{
//		if (i == 5)
//			break;
//		print("%d", i);//1~4然后死循环
//		i++;
//	} while (i <= 10);
//	
//	return 0;
//}


//练习：计算n的阶乘
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
}

//计算： 1!+2！+3！+........+10!
//法一：
//int main()
//{
//	int n = 1, i = 1,ret = 1, sum = 0;
//	for (; n <= 10; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//法二优化:
//int main()
//{
//	int n = 1, i = 1, ret = 1, sum = 0;
//	for (; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//在有序数组中查找具体的某个数
//法一：遍历查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i = sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//法二：折半查找 （二分查找） 最多要查找log以2为底的n次方
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;

//	printf("请输入想要查找的数：\n");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
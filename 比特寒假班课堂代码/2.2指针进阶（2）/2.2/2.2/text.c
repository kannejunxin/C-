#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<assert.h>


//int main()
//{
//	//指针数组 - 存放指针的数组
//	int * arr[5];
//	//数组指针 - 指向数组的指针
//	int data[10] = { 0 };
//	int(*ptr)[10] = &data;
//
//	return 0;
//}


//int main()
//{
//	//一维数组
//	int arr[10];
//	int * p = arr;//首元素地址
//	int(*pa)[10] = &arr;//数组的地址
//
//	//二维数组
//	int data[3][4];
//	int(*pd)[4] = data;//首元素地址
//	int(*p2)[3][4] = &data;//数组的地址
//
//	return 0;
//}


//函数指针 - 指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test(char *str)
//{
//
//}
//int  main()
//{
//	//printf("%p\n", &Add);
//	int (*pf)(int, int) = &Add;//函数指针
//	//void(*pc)(char *) = &test;
//	//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//两个结果一样  如果放在数组里这样写有区别，但是这是函数
//	//这两个是一样的 因为函数没有首元素的地址
//
//	//所以int (*pf)(int, int) = &Add;
//	//可以写成int (*pf)(int, int) = Add;
//
//	int ret=(*pf)(2, 3);//相当于int ret=Add(2, 3);
//	printf("%d\n", ret);
//	//但是这里的*是个摆设，但是有*一定要带上（*）
//	//可以写成
//	int ret = pf(2, 3);
//	return 0;
//}



//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int (*pf)(const char *) = my_strlen;
//	int len = my_strlen(arr);
//	int len2 = (*pf)("bit");
//	int len3 = pf("hi boy");
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	return 0;
//}

//分析代码

//(*( void(*)() )0 )()
//把0强制类型转换函数指针，然后再调用0地址处函数，该函数无参数，返回void

//void ( *signal( int , void(*)(int) ) )(int)
//函数指针嵌套，signal参数有函数指针，返回类型也是函数指针 

//可以简化
//typedef void ( *pfun_t)(int)
//给void ( *)(int) 起一个别名叫做 pfun_t
//pfun_t signal( int , pfun_t);


//函数指针数组  —— 存放函数指针的数组


//以整形指针数组为例  -- 存放整形指针的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int *arr[] = { &a,&b };//整形指针数组
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };//函数指针数组
//	return 0;
//}


//计算器  加、减、乘、除

//#include<stdio.h>
//
//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出计算器\n");
//			break;
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//但是这样的代码会显得过于冗长
//改进
#include<stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	//函数指针的数组  - 性质类似转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };//存放地址
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if(input>=1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}



//指向函数指针数组的指针 - 就是取上面数组名的地址
//int main()
//{
//	//函数指针
//	int(*p)(int, int);
//	//函数指针的数组
//	int(*pArr[4])(int, int);//本质是数组
//
//	int(*ppArr[4])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[4])(int, int)= &ppArr;//本质为指针
//
//
//	return 0;
//}

//回调函数
//下面例子中test1()就是回调函数，通过test2调用（回调函数要救由另外一方调用，test2()就是另外一方）
//void test1()
//{
//	printf("hhh\n");
//}
//void test2(void(*p)())
//{
//	p();
//}
//int main()
//{
//	test2(test1);
//	return 0;
//}


//又或者,下面计算器例子也是回调函数
#include<stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add  2.Sub ********\n");
//	printf("****3.Mul  4.Div ********\n");
//	printf("****    0.exit   ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*p)(int, int))
//{
//	int x = 0, y = 0, ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出计算器\n");
//			break;
//		case 1:
//			calc(Add);
//		case 2:
//			calc(Sub);
//		case 3:
//			calc(Mul);
//		case 4:
//			calc(Div);
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//qsort 快速排序函数
//根据MSDN qsort函数格式为
//void qsort( void *base, 
//			  size_t num, 
//			  size_t width, 
//			  int (__cdecl *compare )(const void *elem1, const void *elem2 ) )
// int (__cdecl *compare )(const void *elem1, const void *elem2 )是一个函数指针，其描述比较方法，要自己定义
//这个返回值是有要求的，e1>e2返回大于0，反之返回小于0，若等于返回1
//qsort 函数参数中用到了回调函数

#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void*e1, const void*e2)//整数比较
//{
//	//这里不能对void*的指针解引用
//	//但void*可以接受任意类型的地址
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	//名字排序本质是字符串比较
//	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	int arr[] = { 1,5,3,10,12,7,9,869 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	//使用qsort排序结构体
//	//按年龄
//	struct Stu prr[] = { {"ZHANGSAN",20},{"LISI",31},{"WANGWU",15} };
//	sz = sizeof(prr) / sizeof(prr[0]);
//	qsort(prr, sz, sizeof(prr[0]), cmp_stu_by_age);
//	//按名字
//	qsort(prr, sz, sizeof(prr[0]), cmp_stu_by_name);
//	return 0;
//}



//仿照快速排序，写一个冒泡排序可以排序任意类型的数据

#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void _swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		/*一个一个字节交换，交换完width大小，就相当于将两个元素交换*/
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		/*相邻两个元素比较*/
//		/*base[j]   base[j+1]*/
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			/*若不满足顺序则交换*/
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int cmp_string(const void *e1, const void *e2)
//{
//	strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu prr[] = { {"ZHANGSAN",15},{"LISI",20},{"WANGWU",30} };
//	int sz = sizeof(prr) / sizeof(prr[0]),i;
//	bubble_sort(prr, sz, sizeof(prr[0]), cmp_string);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d", prr[i].name, prr[i].age);
//		printf("\n");
//	}
//	return 0;
//}
//

//字符串左旋
void leftRound(char *p, int k)
{
	int i, j;
	char tmp;
	int len = strlen(p);
	for (i = 0; i < k; i++)
	{
		tmp = p[0];
		for (j = 0; j < len-1 ; j++)
		{
			p[j] = p[j + 1];
		}
		p[j] = tmp;
	}
}
int main()
{
	char a[100];
	int k;
	char * p;
	p = a;
	printf("请输入字符串:>\n");
	gets(a);
	printf("请输入左旋K的个数:>\n");
	scanf("%d", &k);
	leftRound(p, k);
	printf("%s", p);
}
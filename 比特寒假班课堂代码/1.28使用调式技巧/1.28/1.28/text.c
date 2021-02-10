#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//使用的调式技巧


//Debug调式版本
//Release发布版本
//区分 F5 F9 F10 F11 CTRL+F5
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int ret = Add(2, 3);
//	return 0;
//
//}

//F10 进入调式后，活用调式窗口
//查看变量的值 : 监视  自动窗口  局部变量
//查看内存
//查看调用堆栈
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//调用堆栈：
//堆栈 <==>  栈
//堆     栈  是分开的



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//求1!+2!+3!+......+n!的阶乘
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//会发现有错误，调式一下可以明确感受到ret位置出错；
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//求1!+2!+3!+......+n!的阶乘
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//会死循环，要调式看看这个程序运行逻辑
//会发现数组会越界，但是到arr[12]的时候，取arr[12]的地址，会发现和i的地址一模一样，相当于把i改为0，陷入死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//事实上，i和arr都是局部变量，都放在内存的栈区上的
//栈区内存的使用习惯：先使用高地址处的空间，再使用低地址处的空间,堆区反着来
//所以当数组适当越界的情况下，就会导致越界，就会越界访问到循环变量i,改变i,就可能导致死循环
//当然这也是因为i在arr前面创建，所以i会放在比较高地址位，所以可以放在arr后面创建
//当然这也是因为在VS编译器中i和arr中间隔2个内存单元，如果是比较老版本的编译器，比如VC6.0两者会紧挨着
//这是Debug版本，在release版本中会对代码优化
//测试人员用release版本，研究人员用debug版本，所以在运行可能会有出入
//release版本不可以调式


//练习 ： 1.了解strcpy函数
#include<string.h>
//int main()
//{
//	char arr1[20] = "XXXXXXXXX";
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//2.模拟实现

//void my_strcpy(char* dest, char*src)//原数组，目标数组
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// 优化
//void my_strcpy(char* dest, char*src)//原数组，目标数组
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//再优化
//void my_strcpy(char* dest, char*src)//原数组，目标数组
//{
//	while (*dest++ = *src++)//'\0'ascii码值为0
//	{
//		;
//	}
//}
//再再优化
#include <assert.h>
//assert-断言-括号中的表达式为真，什么都不发生，括号中的表达式为假，就会报错，而且定位问题出入
//void my_strcpy(char* dest, char*src)//原数组，目标数组
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "qqqqqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//如果想让my_strcpy实现链式访问 ，可以返回dest首元素地址

//为了防止参数src被修改，可以用const修饰 char * src  变成 const char *src


//const 修饰指针变量
//int main()
//{
//	const int num = 10;
//	const int n = 10;
//	const int *p = &num;
//	*p = 20;//err
//	p = &n;
//	//const 修饰指针，放在*左边，修饰的是指针指向的内容，使得指针指向的内容，不能通过指针改变
//	//但是指针变量本身是可以修改的
//	int * const pp = &num;
//	*pp = 20;//可以
//	pp = &n;//err
//	//const 修饰指针，放在*右边 修饰的是指针变量本身，使得指针变量本身不可以被修改
//	//但是指针指向的内容可以通过指针来改变
//}









//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("大于\n");
//	else
//		printf("小于\n");//结果为大于，因为strlen返回无符号数
//}


//编译性错误
//int main()
//{
//	printf("haha")
//	return 0;
//}

//连接性错误
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//运行时错误
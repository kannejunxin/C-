#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//字符串
//int main()
//{
//	//"abc";
//	//"a";
//	//"";
//	//字符数组：
//	char arr1[] = "abc";       
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//	char arr4[] = { 'a','b','c',0}; //在ASCII码中\0与字符0等价
//	printf("%s\n", arr1);//打印abc
//	printf("%s\n", arr2);//打印abc+乱码
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//
//	printf("%d\n", strlen(arr1));// 3 字符串结束标志\0
//	printf("%d\n", strlen(arr2));//随机值
//
//	printf("%d\n", sizeof(arr1));//4 会算上\0
//	printf("%d\n", sizeof(arr2));//3 注意sizeof和strlen在计算字符个数上的区别，strlen遇上\0才会停止，sizeof纯粹计算个数
//	return 0;
//	//字符串的结束标准\0;
//}
//

//转义字符： \?  \'  \"   \\   \a   \b   \f   \n   \r   \t   \v	\ddd \xdd
//int main()
//{
//	printf("%s\n", "\"");
//	printf("%c\n", '\'');
//	printf("c:\test\test.c\n");
//	printf("c:\\test\\test.c\n");
//	printf("%c\n", '\123'); // 123为八进制转为十进制结果是83 以83在ASCII码表中对应的字符
//	
//	printf("%c\n", '\x41'); //41为十六进制转为十进制结果是65 以65在ASCII码表中对应的字符
//	printf("%c\n", '\x111');//erro 太大
//	printf("%d\n", strlen("c:\test\328\test.c"));  //结果为14 \32+8 8不算在八进制内

//	printf("%c\n", '\123');//注意和下面两个的区别,在转换十进制的过程中去掉单引号
//	printf("%c\n", 'XNE3');//注意:因为打印一个字符，如果有多个字符则只打印最后一位
//	printf("%c\n", '83');

//  return 0;
//}


//注释

/**/   //多行注释，不可以嵌套 
//    //单行注释

// 选择结构
//int main()
//{
//	int input = 0;
//	printf("你要好好学习码(1/0)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("搬砖\n");
//}

//循环结构  for do..while 后面讲
//int main()
//{
//	int line=0;
//
//	while (line < 20000)
//	{
//		printf("写代码：%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


//函数
//Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum = %d", sum);
//	return 0;
//}

//数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int arr[10] = { 1,2,3 };*///不完全初始化
//
//	//数组的访问 下标
//	printf("%d\n", arr[0]);
//
//	//数组遍历
//	int j = 0;
//	while (j < 10)
//	{
//		printf("%d ", arr[j]);
//		j++;
//	}
//	return 0;
//}

//操作符 
//算数操作符 + - * / %
//移位操作符 >>：右移  <<：左移 移动二进制位
//int main()
//{
//	int a = 12;//12的二进制为：00000000000000000000000000001100
//	int b = a >> 1; //00000000000000000000000000000110  转为十进制为6
//	int c = a << 1;//00000000000000000000000000011000	转为十进制为24
//	//暂时不谈负数 负数三码有别 
//	printf("%d\n", b);
//	return 0;
//}

//位操作符 & ^ | 按二进制位
//int main()
//{
//	int a = 5;//0101
//	int b = 3;//0011 
//	int c = a & b;//0001 全为1才为1		    结果为1
//	int n = a | b;//0111 全为0才为0		    结果为7
//	int m = a ^ b;//0110 相同为0 相异为1     结果为6
//
//}

//  赋值操作符 += -= /= %= = ..........
// 单目操作符 一个操作数  重点：！：逻辑反操作 sizeof：计算操作数的类型长度   ++    --   ~：按位取反 & *  ()强制类型转换
//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
// 双目操作符 两个操作数
//逻辑操作符 && || 
//条件操作符 ？ 也叫三目操作符

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 10;
//	else
//		b = 20;
//	
//	//这两种表示等价
//	
//	b = (a > 5 ? 10 : 20);
//}

//逗号操作符 结果为最后一项
//int main()
//{
//	int a = (2, 5, 6, 7, 8);
//	printf("%d", a);
//	return 0;
//}

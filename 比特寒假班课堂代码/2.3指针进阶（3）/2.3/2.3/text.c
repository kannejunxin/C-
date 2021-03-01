#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void qsort(void *base,//待排序的数据的起始位置
//			size_t num, //排序的元素个数
//			size_t width, //每个元素的宽度
//			int(__cdecl *compare)(const void *elem1, const void *elem2));//本质是一个函数指针作用：待比较的两个元素的比较函数（比较方法）
//(_cdecl - 函数调用约定  暂时不用理解 可以忽略)

//qsort 默认排成升序

//int cmp_int(const void*e1, const void*e2)
//{
//	return 	(*(int *)e2) - (*(int*)e1);
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 }, i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//指针和数组笔试题解析
#include<string.h>
//sizeof 操作符 计算操作数所占空间的大小
//可以计算 类型、变量等等的大小，计算大小的时候不在乎内存所放的值
//
//strlen()求字符串长度
//只适用于 字符串和字符数组，关注‘\0’
//库函数
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16   数组名单独放在sizeof内部 计算的是数组的总大小
//	printf("%d\n", sizeof(a + 0));//   4 / 8
//	printf("%d\n", sizeof(*a));//  4 （int型）（第一个元素）
//	printf("%d\n", sizeof(a + 1)); //  4 / 8
//	printf("%d\n", sizeof(a[1]));//4   第二个元素
//	printf("%d\n", sizeof(&a));//  4 / 8  取出整个数组的地址 但仍是地址
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));// 4 / 8  即使跳过整个数组的地址，仍然是地址
//	printf("%d\n", sizeof(&a[0]));//  4 / 8   首元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//  4 / 8
//
//	//字符数组
//	
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6   数组名单独放在sizeof内部 计算的是数组的总大小  sizeof计算空间的大小
//	printf("%d\n", sizeof(arr + 0));//  4 / 8 本质数组首元素的地址
//	printf("%d\n", sizeof(*arr));//1  数组首元素	
//	printf("%d\n", sizeof(arr[1]));//1  数组第二个元素
//	printf("%d\n", sizeof(&arr));// 4 / 8  &arr虽然是取出数组的地址，但还是地址
//	printf("%d\n", sizeof(&arr + 1));// 4/ 8  
//	printf("%d\n", sizeof(&arr[0] + 1));// 数组第二个元素的地址 
//	
//	printf("%d\n", strlen(arr));//随机值  因为arr数组中没'\0'
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//err  strlen()函数的参数是地址   会非法访问内存
//	//printf("%d\n", strlen(arr[1]));//err  同上
//	printf("%d\n", strlen(&arr));//随机值  和前两个随机值一样  因为&arr虽然取出的是整个数组的地址 ，但实际显示还是首元素的地址
//	printf("%d\n", strlen(&arr + 1));//（上面的）随机值- 6
//	printf("%d\n", strlen(&arr[0] + 1));//（上面的）随机值 - 1
//	
//	char arr[] = "abcdef";//有'\0'
//	printf("%d\n", sizeof(arr));//数组总大小   7
//	printf("%d\n", sizeof(arr + 0));//  4 / 8  首元素地址
//	printf("%d\n", sizeof(*arr));// 1 第一个元素
//	printf("%d\n", sizeof(arr[1]));// 1 第二个元素
//	printf("%d\n", sizeof(&arr));  // 4 / 8 
//	printf("%d\n", sizeof(&arr + 1));// 4 / 8
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 / 8 第二个元素的地址
//	
//	printf("%d\n", strlen(arr));// 6 首元素地址
//	printf("%d\n", strlen(arr + 0));// 6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5                                                                                                                                                                                                             rlen(&arr[0] + 1));
//	
//	char *p = "abcdef";//有‘\0’
//	printf("%d\n", sizeof(p));// 4 / 8   p为指针变量
//	printf("%d\n", sizeof(p + 1));// 4/8  p+1是字符‘b’的地址
//	printf("%d\n", sizeof(*p));//1   解引用访问一个字节
//	printf("%d\n", sizeof(p[0]));// 1    p[0]=*(p+0)
//	printf("%d\n", sizeof(&p));// 4 / 8
//	printf("%d\n", sizeof(&p + 1));// 4 / 8
//	printf("%d\n", sizeof(&p[0] + 1));//  4/8  b的地址
//	
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值  与上面的随机值无关系  （不是相差4，因为不能确定p那个地址里有没有'\0'
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 3*4*4=48  整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4  就一个int元素
//	printf("%d\n", sizeof(a[0]));//a[0]实际为第一行的数组名，4*4=16
//	printf("%d\n", sizeof(a[0] + 1));// 4 / 8  地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素
//	printf("%d\n", sizeof(a + 1));// 4 / 8 a作为二维数组的数组名，并没有&，也没有单独放在sizeof内部，那么数组名a就是首元素（第一行）的地址  所以a+1就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));// 16  第二行的大小  *（a+1）=a[1] 第二行数组名单独放在sizeof内部
//	printf("%d\n", sizeof(&a[0] + 1));// 4 / 8    取出第一行的地址+1跳过第一行指向第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//  16  取出第一行的地址+1跳过第一行指向第二行地址，解引用结果是第二行的大小 
//	//*(&a[0] + 1)等价于*(a + 1)
//	printf("%d\n", sizeof(*a));//16  第一行的大小
//	printf("%d\n", sizeof(a[3]));//16  sizeof内部表达式不会运算所以不存在越界   只要明确类型就可以
//	return 0;
//}

//还有一些指针笔试题

//笔试题1：
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);
//
//	printf("%d %d", *(a + 1), *(ptr - 1));// 2 5
//	return 0;
//}

//笔试题2：
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值位0x100000
//int main()
//{
//	p = (struct Test *)0x100000;
//
//	printf("%p\n", p + 0x1);//0x100000+20
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+8
//	printf("%p\n", (unsigned int *)p + 0x1);//0x100000+4
//	return 0;
//}

//笔试题3：
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4   2000000
//	return 0;
//}

//笔试题4：
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//这里是小括号()括起来只是表达式，而这里是逗号表达式，所以只有最有一个值1 3 5
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//笔试5：
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//笔试6：
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int*)(*(a + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//}

//笔试7：
int main()
{
	char *a[] = { "work","at","alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);//at
	return 0;
}

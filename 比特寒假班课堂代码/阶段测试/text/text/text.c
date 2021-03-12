#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//题一：求A,B最小公倍数
int main1()
{
	unsigned int a = 0; unsigned int b = 0;
	scanf("%d%d", &a, &b);
	//min是设定的最小公倍数
	int min = a > b ? a : b;
	while((min%a != 0) || (min %b != 0))
	{
		min++;
	}
	printf("%u", min);
	return 0;
}

//法二 
//先求最大公约数c  则最大公倍数a = (A*B) / c

//法三
int main2()
{
	unsigned int a = 0; unsigned int b = 0;
	scanf("%d%d", &a, &b);
	int i = 1;
	//min是设定的最小公倍数
	while (a*i % b !=0)
	{
		i++;
	}
	printf("%u", a*i);
	return 0;
}



//题二 将一句话的单词进行倒置，标点不倒置  比如I like Beijing.  得到 Beijing. like I
void reverse(char*left, char*right)//逆序整个字符串的函数
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main3()
{
	char arr[100] = { 0 };
	gets(arr);//gets可以读取一行 不在乎空格
	//1.思路整个字符串逆序
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.字符串中的每一个单词逆序
	char*start = arr;
	char*end = arr;
	while (*end)
	{
		end = start;
		while (*end != ' ' && *end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		/*if (*end == ' ')*/
			start = end + 1;
	/*	else
			start = end;*/
	}
	printf("%s", arr);
	return 0;
}
//strtok
int main()
{
	char  arr[100] = { 0 };
	gets(arr);//gets可以读取一行 不在乎空格
	char *s = " ";
	char *str = NULL;
	for (str = strtok(arr, s); str != NULL; str = strtok(NULL, s))
	{
		printf("%s ", str);
	}
	return 0;
}
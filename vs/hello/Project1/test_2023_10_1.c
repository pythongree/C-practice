#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//常量
/*
1.字面常量，如3，3.14，‘w’字符，“abc”字符串
2.const修饰的常变量，不可修改
3.define定义的标识符常量，不可修改
4.枚举常量
*/

//#define WGQ 200
//#define STR "王国强"
//enum Color //没有创建对象
//{
//	RED, // 可赋值
//	GREEN,
//	BLUE
//};
//int main()
//{
//	const int a = 1; // 不可修改
//	printf("%d\n", WGQ);
//	int b = WGQ;
//	printf("%d\n", b);   // %d打印十进制的数
//	printf("%s\n", STR); // %s打印字符串
//
//	enum Color c = RED; //创建枚举常量对象，不可修改
//	printf("%d\n", c);
//	return 0;
//}

// 字符串
/*
1 单引号修饰字符 'w'
2 双引号修饰字符串 "abcdef"
3 char修饰的字符string
*/


//int main()
//{
//	char arr1[] = "abc"; // 默认结尾有\0（表示结束）
//	char arr2[] = {'a', 'b', 'c', '\0' };// 默认结尾没有\0，打印会出现乱码
//										//直到下一个\0
//
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);无\0乱码
//	printf("%s\n", arr2);//有\0正常
//	printf("%d\n", strlen(arr1)); //包含在string.h中
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符
/*
1  \?	 防止多个问号被解析成三字母词（古老问题，现在没有）
2  \'	 转义单引号
3  \"	 转义双引号
4  \\	 转义转义符号
5  \a	 蜂鸣
6  \b	 退格符
7  \f	 进纸符
8  \n	 换行符
9  \r	 回车
10 \t	 水平制表符
11 \v	 垂直制表符
12 \ddd  ddd表示1~3个八进制的数字，如：\130 X
13 \xdd  dd表示两个十六进制数字，如：\X30 0
*/

/*
%d - 打印整型
%c - 打印字符
%s - 打印字符串
%f - 打印float类型
%lf - 打印double类型
%zu - 打印sizeof的返回值
*/

//int main()
//{
//
//	printf("合肥工业大学\n王国强\n");
//	printf("%c\n", '\130'); //\ddd d代表三个数字八进制 对于输出ascii码
//	printf("%c\n", '\x30'); //\xdd 十六进制
//	return 0;
//}


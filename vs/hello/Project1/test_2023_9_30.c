#define _CRT_SECURE_NO_WARNINGS // 防止scanf出错
//std 标准库 i input o output
#include<stdio.h>

//int main(void)
//{
//	printf("hello!");
//	return 0;
//}

//int main()
//{
//	/*
//	数据类型:
//	char      1  byte (字节) = 8  bit（比特位）
//	short     2  byte (字节) = 16 bit（比特位）
//	int       4  byte (字节) = 32 bit（比特位）
//	long      4  byte (字节) = 32 bit（比特位）
//	long long 8  byte (字节) = 64 bit（比特位）
//	float     4  byte (字节) = 32 bit（比特位）
//	double    8  byte (字节) = 64 bit（比特位）
//	*/
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	int age = 23;
//	float price = 88.8;
//	char wo = "王国强";
//	printf("我今年%d\n", age);
//	return 0;
//
//}

/*
全局变量-{}外的变量
局部变量-{}内的变量 局部优先
*/

//int a = 1;
//
//int main()
//{
//	int a = 2;
//	printf("a = %d", a);
//
//	return 0;
//}

//int main()
//{
//	// 两数求和
//	int a = 0;
//	int b = 0;
//
//	// 输入
//	scanf("%d %d", &a, &b); &是取址符
//
//	// 求和
//	int sum = a + b;
//
//	// 输出
//	printf("两数总和为：%d\n", sum);
//
//	return 0;
//}

//变量的作用域和生命周期
/*
1.局部变量

2.全局变量
*/

//extern int a;// 申明来自外部的符号
//void test()  // 设置函数
//{
//	printf("hello\n");
//}
//int main()
//{
//	test();
//	//int a = 10;//作用于整个{}内
//	{
//		int a = 2;// 局部优先
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}



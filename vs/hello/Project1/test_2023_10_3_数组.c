#define _CRT_SECURE_NO_WARNINGS
//
#include <stdio.h>
//
//// 加法函数
////
////int ADD(int x, int y)
////{
////	int sum = x + y;
////	return sum;
////}
//
//
////int main()
////{
////	int a = 0;
////	int b = 0;
////	printf("输入要相加的数\n");
////	scanf("%d %d", &a, &b);
////
////	int sum = ADD(a, b);
////	printf("和为：%d\n", sum);
////
////
////	return 0;
////}
//
////// 数组
////int main()
////{
////
////	int arr[10] = {1, 23, 23, 54, 54};
////	char ch[3] = { 'q', 'e', 'w' };
////	printf("%d\n", arr[9]);
////	printf("%s\n", ch[2]);
////	return 0;
////}
//
//
//// 基本运算符
////int main()
////{
////	int a = 7 / 2;  //除号两端是整数，则答案为整数
////	float b = 7 / 2.0;//除号两端有小数，则答案为小数
////	printf("%d\n", a);
////	printf("%f\n", b);
////	printf("%.1f\n", b);//.后面控制小数点位数
////
////	//取模(余)运算
////	int c = 7 % 2;//除号两端只能是整数
////	printf("%d\n", c);
////
////	return 0;
////}
//
//int main()
//{
//
//	//int a = 1;
//	//a += 2;
//	//printf("%d\n", a);
//	//a -= 1;
//	//printf("%d\n", a);
//	//a *= 2;
//	//printf("%d\n", a);
//	//a /= 2;
//	//printf("%d\n", a);
//	//a++;
//	//printf("%d\n", a);
//	//a--;
//	//printf("%d\n", a);
//
//	//int flag = 0;//0为假，其余为真
//	//if (!flag)
//	//{
//	//	printf("%d\n", flag);
//	//}
//
//	//int arr[10] = { 0 };
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(arr[0]));
//	//printf("%zu\n", sizeof(arr)/ sizeof(arr[0]));//得知元素个数
//
//
//	//// 后置++
//	//int a = 10;
//	//int b = a++;//int b = a; a = a + 1;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	// 前置++  --同理
//	//int a = 10;
//	//int b = ++a;// a = a + 1;int b = a;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	////强制类型转换
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//
//
//	//逻辑操作符
//	//&& 与
//	// || 或
//
//	//条件操作符
//	//三目操作符
//	// a ？b ：c， a真，b执行；a假，c执行
//	//int a = 10;
//	//int b = 20;
//	//int c = a > b ? a : b;
//	//printf("%d\n", c);
//
//
//	//逗号表达式
//	//依次计算，结果为最后一个表达式
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//
//	//int d = (c = a + b, a = b + c, c + 2);
//	//printf("%d\n", d);
//
//
//	// 下标引用操作符[]
//	// 函数调用操作符（）
//	// 
//
//	
//
//
//	return 0;
//}

// 关键字typedef
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int a = 1;
//	uint b = 1;
//	// a 与 b 的类型一样
//
//	return 0;
// }

// 关键字 static
//1 修饰局部变量
//2 修饰全局变量
//3 修饰函数

//void add()
//{
//	//int a = 1; 局部变量
//	static int a = 1;//a放入静态变量
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		add();
//		i++;
//
//	}
//	return 0;
//}

//extern int a;
//extern int ADD(int x, int y);
//int main()
//{
//	int b = 10;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//define
//#define MAX 2023//定义标识常量
//#define ADD(x, y, z) ((x) + (y) + (z))//定义宏
////		宏名  参数         宏体			作用是替换参数
//int main()
//{
//	int a = 10;
//	int b = 23;
//	int c = MAX;
//	int d = ADD(a, b, c);//int d = ((a) + (b) + (c));
//	printf("%d\n", d);
//	&a;
//	printf("%p", &a);//打印地址%p,十六进制
//
//	return 0;
//}


// 指针变量

//int main()
//{
//	int a = 10;
//	int * p = &a; //指针变量，储存a的地址
////  int 说明p指向的a是int类型
////   *  说明p是指针变量， 解引用操作符// *p 就是所指对象
//	*p = 20;
//	printf("%d\n", a);
//	//32位电脑，32比特位，4byte
//	//64位，8byte
//	printf("%zu\n", sizeof(int*));
//
//
//
//	return 0;
//}

//结构体
//
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char school[10];
//	char tele[12];
//	int QQ;
//
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s %d\n", (*ps).name, (*ps).age, (*ps).school, (*ps).tele, (*ps).QQ);
//	//. 操作符
//	printf("%s %d %s %s %d\n", ps->name, ps->age,ps->school, ps->tele,ps->QQ);
//	//->箭头操作符，结构体地址->成员
//}
//int main()
//{
//	struct Stu wgq = { "王国强", 23, "HFUT", "15105633059", 1275433161 };
//	printf("%s %d %s %s %d\n", wgq.name, wgq.age, wgq.school, wgq.tele, wgq.QQ);
//	print(&wgq);
//
//	return 0;
//}
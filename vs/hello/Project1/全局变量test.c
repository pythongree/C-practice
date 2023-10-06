#define _CRT_SECURE_NO_WARNINGS

int a = 2023;
//static int a = 2023;// 不能全局使用了，只能内部使用
//外部链接变成内部链接

int ADD(int x, int y)//与全局变量一样
{
	return x + y;
}
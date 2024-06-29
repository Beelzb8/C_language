#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	printf("a = %d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char));//%zu 打印sizeof返回的无符号整型，不用%d
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}
//任意数求和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入num1和num2的值\n");
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("两数之和 = %d", sum);
//	return 0;
//}
//作用域
//全局变量
//全局变量的作用域是整个工程
//局部变量
//局部变量的作用域是变量所在的局部范围

//生命周期
//全局变量的生命周期是整个程序的生命周期
//局部变量的生命周期在进入作用域时开始，退出作用域时结束
 
//声明来自外部的符号
//extern int a;//全局变量
//void test()
//{
//	printf("test---> %d\n", a);
//}
//int main()
//{
//	test();
//	{ 
//		int a = 20;//局部变量
//		printf("局部变量a = %d\n", a);
//		
//	}
//	printf("全局变量a = %d", a);
//	return 0;
//}

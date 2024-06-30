#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//常量
//1.字面常量
// 30;
// 1.8;
// 'a';
// "answer";
//2.const定义的常变量
 //int main()
 //{
 //const int a = 20;//在c语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性
 ////a = 30;//err
 //printf("%d\n", a);
 // 验证
 // const int n = 10;
 // int arr[n] = {0};//err
 //}
//3.#define定义的标识符变量
 //#define MAX 1000
 //#define STR "abcde"
 //int main()
 //{
 //printf("%d\n" , MAX);
 // int a = MAX;
 // printf("%d\n", a);
 // printf("%s\n", STR);
 // MAX = 200;//err
 // return 0;
 //}
//4.枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//enum Gender
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	RED = 30;//err
//	MALE = 10;//err
// enum Color c = RED;
// enum Color d = MALE;
//	printf("%s", RED);
//	printf("%s", MALE);
//	return 0;
//}
//字符串
//c语言没有字符串类型
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len = strlen("abc");//求一个字符串长度的一个函数，string length 头文件string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
// return 0;
//}
//转义字符
//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	printf("%s\n", "c:\test\628\test.c");
//	return 0;
//}
//注释
//写代码时要写注释，帮助自己，又帮助他人
// 
//选择语句
//int main()
//{
//	int choice = 0;
//	printf("要好好学习吗？(1/0)\n");
//	scanf("%d", &choice);
//	if(choice == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//循环语句
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;//0行代码
//	while (line < 20000)
//	{
//		printf("写代码:%d行\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}
//函数
//计算两数之和
//int Add(n1, n2)
//{
//	return (n1 + n2);
//}
//int main()
//{
//	//输入
//	int n1 = 0;
//	int n2 = 0;
//	printf("输入 n1 , n2 \n");
//	scanf("%d %d", &n1, &n2);
//	//求和
//	printf("n1 + n2 = ");
//	int sum = Add(n1, n2);//自建函数
//	//打印
//	printf("%d\n", sum);
//	return 0;
//}
//数组
//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	//循环打印
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//比较两个数的较大值
//int subtraction(int x, int y)
//{
//	return (x - y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	printf("请输入要进行比较的数\n");
//	scanf("%d %d", &n1, &n2);
//	//比较
//	int res = subtraction(n1, n2);
//	if (res > 0)
//	{
//		printf("较大值=%d\n", n1);
//	}
//	else if (res == 0)
//	{
//		printf("一样大\n");
//	}
//	else
//	{
//		printf("较大值=%d\n", n2);
//	}
//	return 0;
//}
//操作符，略
//三目运算符
//int main()
//{
//	int a = 30;
//	int b = 40;
//	int c = a > b ? a : b;
//	printf("较大值 = %d\n", c);
//	return 0;
//}
//逗号表达式就是用逗号隔开的一段表达式
//逗号表达式的计算结果就是最后一个表达式的计算结果
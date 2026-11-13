#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("haha\n");
//	goto next;
//	printf("hehe\n");
//next:
//	printf("hihi\n");
//
//	return 0;
//}
//int main()
//{
//again:
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//在C语言中，system函数是专门用来执行系统命令的,需要的头文件是<windows.h>
//字符串是多个字符，得存储到字符数组中
//C语言中，汉字的编码是占2个字符空间的
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char input[20];
//	system("shutdown -s -t 60");
//again:
//	printf("请注意,电脑将在60秒内关机,如果输入我是猪,就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//		
//
//
//	return 0;
//}
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char input[20];
//	
//	while (1)
//	{
//		system("shutdown -s -t 60");
//		printf("请注意,电脑将在1分钟内关机,请输入我是猪\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do
//	{
//
//		printf("--------------------\n");
//		printf("-----1.play---------\n");
//		printf("-----0.exit---------\n");
//		printf("--------------------\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			int guess = 0;
//			int r = rand() % 100 + 1;
//			while (1)
//			{
//				printf("请输入:");
//				scanf("%d", &guess);
//				if (guess > r)
//				{
//					printf("猜大了\n");
//
//				}
//				else if (guess < r)
//				{
//					printf("猜小了\n");
//				}
//				else
//				{
//					printf("猜对了\n");
//					break;
//				}
//			}
//		}
//		break;
//
//
//
//		case 0:
//		{
//			printf("即将退出\n");
//			break;
//		}
//		default:
//		{
//			printf("请输入:1/0\n");
//			break;
//		}
//		}
//
//
//
//	} while (input);
//
//
//	return 0;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//
//	return 0;
//}
//int main()
//{
//	int math[20];
//	char ch[8];
//	double data[15];
//
//
//	return 0;
//}
int main()
{
	char ch1[] = { 'a','b','c' };//[a b c]
	char ch2[] = "abc";//[a b c \0]
	printf("%zu\n", strlen(ch1));
	printf("%zu\n", strlen(ch2));
	printf("%s\n", ch1);
	printf("%s\n", ch2);

	return 0;
}
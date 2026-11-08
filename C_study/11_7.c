#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 10;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//
//
//	return 0;
//}
////int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 60)
//		printf("拿捏拿捏\n");
//	else
//		printf("不考不考\n");
//
//
//
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("拿捏拿捏\n");
//		printf("庆祝一下\n");
//	}
//	else
//	{
//		printf("不考不考\n");
//		printf("学习学习\n");
//	
//	}
//
//
//	return 0;
//}
//int main()
//{
//	float total = 0.0f;
//	scanf("%f", &total);
//	if (total >= 50)
//		printf("满50,减15,总价%.2f", total - 15);
//	else if (total >= 30)
//		printf("满30减8,总价%.2f", total - 8);
//	else if (total >= 20)
//		printf("满20减5,总价为%.2f", total - 5);
//	else
//		printf("不参与活动");
//	return 0;
//
//}
//int main()
//{
//	int minute = 0;
//	scanf("%d", &minute);
//	if (minute <= 1)
//		printf("秒回\n");
//	else if (minute <= 10)
//		printf("他在忙\n");
//	else if (minute <= 60)
//		printf("他有事\n");
//	else
//		printf("代码耍起\n");
//	return 0;
//}
//int main()
//{
//	int score = 50;
//	int has_failed = 1;
//	int has_warn = 1;
//	if (score >= 85)
//	{
//		if (has_failed == 0)
//		{
////			if (has_warn == 0)
//			{
//				printf("有奖学金\n");
//		
//			}
//			else
//			{
//				printf("有记过\n");
//			}
////		}	
//		else
//		{
//			printf("有挂科\n");
//		}
////	}
//	else
//	{
//		printf("成绩不够\n");
//	}
////	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    
//    return 0;
//}
//int main()
//{
//	int r =20  > 12;
//	printf("%d\n", r);
//
//
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 30)
//		printf("青年\n");
//	return 0;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int m = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 > n2)
//	{
//		m = n1;
//		printf("较大值%d\n", m);
//	}
//	else
//	{
//		m = n2;
//
//		printf("较大值%d\n", m);
//	}
//	return 0;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int m = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 > n2)
//	
//		m = n1;
//		
//	
//	else
//	
//		m = n2;
//
//	printf("较大值%d\n", m);
//	
//	return 0;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int m = 0;
//	scanf("%d %d", &n1, &n2);
//	m = n1 > n2 ? n1 : n2;
//	printf("较大值%d", m);
//	return 0;
//}
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//		printf("haha\n");
//	if (!flag)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//
//	return 0;
//}
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month ==2)
//		printf("冬天\n");
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("闰年\n");
//	else if (year % 400 == 0)
//		printf("闰年\n");
//	else
//		printf("不是\n");
//
//
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100!=0)||(year % 400 == 0))
//		printf("闰年\n");
//	else
//		printf("不是\n");
//
//
//
//	return 0;
//}
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = a++ && ++b && d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//?
//
//    return 0;
//}
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = a++ && ++b && d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//?
//
//    return 0;
//}
int main()
{
    int i = 0, a = 1, b = 2, c = 3, d = 4;

    i = a++ || ++b || d++;

    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//?

    return 0;
}

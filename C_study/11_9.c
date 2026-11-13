#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 3 == 0)
//		printf("余数是0\n");
//	else if (i % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算和输出
//	switch (n % 3)//0 1 2
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("早八\n");
//		break;
//	case 6:
//	case 7:
//		printf("耍起\n");
//		break;
//	default:
//		printf("错了\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		printf("%d", i % 10);
//		i /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 2;
//	while (i <= n)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//int main()
//{
//	int boss_hp = 1000;
//	int attack = 150;
//	while (boss_hp > 0)
//	{
//		int real_attack = (boss_hp > attack) ? attack : boss_hp;
//		printf("造成的伤害: %d\n",real_attack);
//		boss_hp -= real_attack;
//		printf("boss血量剩余:%d\n", boss_hp);
//
//	}
//	printf("你打败了boss\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	for(int i =1;i <= 10;i++)
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (b = 0, a = 10;b < a;b++, a--)
//	{
//		printf("b = %d,a = %d\n",b,a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int c = (b = 4, a = b + 10, b = a + 1);//逗号表达式
//
//	printf("%d\n", c);
//
//	int d = 10;
//
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//
//	}
//
//	return 0;
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n, sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3;i <= 100;i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	double money = 10000;
//	int year = 1;
//	for (year = 1;year <= 5;year++)
//	{
//		money *= 1.03;
//		printf("第%d年,余额%.2f元\n", year, money);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	do
//	{
//		count++;
//		n /= 10;
//	} while (n);
//	printf("一共%d位\n", count);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int n = 0;
//	do
//	{
//		scanf("%d", &n);
//		if (n <= 0)
//			printf("请输入大于0的数");
//
//	} while (n <0);
//	do 
//	{
//		count++;
//		n /= 10;
//
//	} while (n);
//	printf("%d\n", count);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10) //判断
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//
//		}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//        i = i + 1;
//    } while (i <= 10);
//
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int flag = 1;//假设刚开始是素数
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//
//	return 0;
//}
//#include <math.h>//sqrt函数用来开平方
//
//int main()
//{
//	int i = 0;
//	//产生100-200之间的数字
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否为素数
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//i是素数，进行打印
//		}
//	}
//	return 0;
//}

//你的手机丢了，在屏幕上输出信息告诉大家
#include <stdio.h>
//int main()
{
    printf("我的手机丢了");
    return 0;

}
//输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行，每个标题之间间隔4个空格。
//第二行，分隔行，一共21个减号"-"。
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
//Name Age Gender
//-------------------- -
//Jack 18 man
#include <stdio.h>
//int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man");


    return 0;
}
//形如下图所示，仅由空格、换行和半角星号构成）。请帮他编写程序输出这架小飞机。
#include <stdio.h>
//int main()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");



    return 0;
}
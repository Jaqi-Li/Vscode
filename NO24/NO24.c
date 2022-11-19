// 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

// 程序分析：请抓住分子与分母的变化规律。

#include <stdio.h>

int main(int argc, char **argv)
{
    int on[20];
    int down[20];
    int i;
    double res = 0;

    for (i = 0; i < 20; ++i)
    {
        if (i == 0)
        {
            on[i] = 2;
            down[i] = 1;
            res += (double)on[i] / down[i];
        }
        else
        {
            on[i] = on[i - 1] + down[i - 1];
            down[i] = on[i - 1];
            res += (double)on[i] / down[i];
        }
    }

    printf("%lf", res);

    return 0;
}
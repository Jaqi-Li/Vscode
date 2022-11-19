// 题目：求1+2!+3!+...+20!的和。

// 程序分析：此程序只是把累加变成了累乘。

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    long double mix = 1;
    long double res = 0;

    for (i = 1; i <= 20; ++i)
    {
        mix *= i;
        res += mix;
    }
    printf("%Lf", res);
    return 0;
}
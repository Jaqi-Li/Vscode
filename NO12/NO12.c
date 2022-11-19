// 题目：判断 101 到 200 之间的素数。

// 程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int a)
{
    int i;
    for (i = 2; i < sqrt(a); ++i)
    {
        if (0 == (a % i))
            return false;
    }

    return true;
}

int main(int argc, char **argv)
{

    int i;

    for (i = 101; i <= 200; ++i)
    {
        if (isPrime(i))
            printf("%d\t", i);
    }
    return 0;
}
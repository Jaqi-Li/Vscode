// 题目：一个偶数总能表示为两个素数之和。

// 程序分析：我去，这是什么题目，要我证明这个问题吗？真不知道怎么证明。那就把一个偶数分解成两个素数吧。

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x)
{
    int i;
    for (i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int even = 4;
    int i;
    for (i = 0; i < even / 2; ++i)
    {
        if (isPrime(i) && isPrime(even - i))
            printf("%d,%d", i, even - i);
    }

    return 0;
}
// 题目：求100之内的素数。

// 程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。

// 程序源代码：
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); ++i)
    {
        if (0 == n % i)
            return false;
    }
    return true;
}
int main(int argc, char **argv)
{
    int i;
    for (i = 2; i < 100; ++i)
    {
        if (isPrime(i))
            printf("%d\t", i);
    }
    return 0;
}
// 题目：判断一个数字是否为质数。

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
    printf("N=%d %d\n", 1, isPrime(1));
    printf("N=%d %d\n", 2, isPrime(2));
    printf("N=%d %d\n", 3, isPrime(3));
    printf("N=%d %d\n", 4, isPrime(4));
    printf("N=%d %d\n", 7, isPrime(7));
    printf("N=%d %d\n", 9, isPrime(9));
    printf("N=%d %d\n", 13, isPrime(13));
    printf("N=%d %d\n", 17, isPrime(17));
    printf("N=%d %d\n", 100, isPrime(100));
    printf("N=%d %d\n", 23, isPrime(23));
    printf("N=%d %d\n", 1, isPrime(1));
    return 0;
}
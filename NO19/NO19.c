// 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool iswanshu(int a)
{
    int i;
    int temp = 0;
    for (i = 1; i <= (a / 2); ++i)
    {
        if (0 == a % i)
        {
            temp += i;
        }
    }
    return (temp == a) ? true : false;
}

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < 1000; ++i)
    {
        if (iswanshu(i))
            printf("%d\t", i);
    }

    return 0;
}
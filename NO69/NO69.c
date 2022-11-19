// 题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int number;
    printf("围成一圈的人数：");
    scanf("%d", &n);
    int *circle = (int *)malloc(sizeof(int) * (n + 1));

    circle[0] = n;
    for (i = 1; i < n + 1; ++i)
    {
        circle[i] = 1;
    }

    i = 0;
    number = 0;
    while (circle[0] != 1)
    {
        i = i % n + 1;
        if (circle[i] == 0)
        {
            continue;
        }
        number = number % 3 + 1;
        if (number == 3)
        {
            circle[i] = 0;
            circle[0]--;
        }
    }

    for (i = 1; i < n + 1; ++i)
    {
        if (circle[i] == 1)
        {
            printf("%d", i);
        }
    }

    return 0;
}
// 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

// 程序分析：见下面注释。

#include <stdio.h>

int main(int argc, char **argv)
{
    float before = 100;
    float after;
    float distance = 0;
    float i;

    for (i = 0; i < 10; ++i)
    {
        distance += before;
        after = before / 2;
        distance += after;
        before = after;
    }
    distance -= after;
    printf("distance:%f\nHeight:%f",distance,after);

    return 0;
}
// 题目：输出9*9口诀。

// 程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。

#include <stdio.h>

int main(int argc, char **argv)
{
    int i, j;
    for (i = 1; i <= 9; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}
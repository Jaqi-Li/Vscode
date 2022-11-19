// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

// 程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。

#include <stdio.h>

void printArr(int arry[], int length)
{
    int i;
    for (i = 0; i < length; ++i)
    {
        printf("%d ", arry[i]);
    }
}

int main(int argc, char **argv)
{
    int res[40];
    int i;
    for (i = 0; i < 40; ++i)
    {
        if (i < 2)
        {
            res[i] = 1;
        }
        else
        {
            res[i] = res[i - 1] + res[i - 2];
        }
    }

    printArr(res, 40);

    return 0;
}

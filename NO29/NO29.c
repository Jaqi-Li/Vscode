// 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

// 程序分析：学会分解出每一位数，如下解释。

#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    int i;
    printf("请输入一个5位数");
    scanf("%d", &number);

    while (0 != number)
    {
        i = number % 10;
        number /= 10;
        printf("%d", i);
    }

    return 0;
}
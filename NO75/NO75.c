// 题目：输入一个整数，并将其反转后输出。

#include <stdio.h>

int reverse(int x)
{
    int result = 0;
    while (x != 0)
    {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int main()
{
    int i = 12345;
    int result = reverse(i);
    printf("%d-->%d", i, result);
}
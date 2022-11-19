// 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

// 程序分析：学会分解出每一位数。

#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    int temp;
    int reverse = 0;
    printf("请输入一个数字：");
    scanf("%d", &number);
    temp = number;
    while (0 != temp)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    if (number == reverse)
        printf("%d是回文数", number);
    else
        printf("%d不是回文数", number);

    return 0;
}
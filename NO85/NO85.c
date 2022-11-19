// 题目：一个偶数总能表示为两个素数之和。

// 程序分析：我去，这是什么题目，要我证明这个问题吗？真不知道怎么证明。那就把一个偶数分解成两个素数吧。

#include <stdio.h>

int main()
{

    int prime = 13;
    int sum = 1;
    int nine = 9;
    while (nine % prime)
    {
        sum++;
        nine = nine * 10 + 9;
    }

    printf("%d,%d", sum, nine);

    return 0;
}
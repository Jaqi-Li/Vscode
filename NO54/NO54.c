// 题目：取一个整数 a 从右端开始的 4～7 位。

// 程序分析：可以这样考虑：

// (1)先使 a 右移 4 位。

// (2)设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0<<4)

// (3)将上面二者进行 & 运算。

#include <stdio.h>
int main()
{
    int a = 36;
    unsigned char b = ~((~0) << 4);
    unsigned char c = b & (a >> 4);
    printf("%d", c);

    return 0;
}
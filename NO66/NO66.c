// 题目：输入3个数a,b,c，按大小顺序输出。

// 程序分析：利用指针方法。

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b, c;
    int i;

    a = 1;
    b = 3;
    c = 2;

    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);

    printf("%d,%d,%d", a, b, c);

    return 0;
}
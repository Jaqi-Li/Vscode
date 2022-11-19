// 题目：利用递归方法求5!。

// 程序分析：递归公式：fn=fn_1*4!

#include <stdio.h>

int fun(int a)
{
    if (a == 0)
        return 1;
    else
        return fun(a - 1) * a;
}

int main(int argc, char **argv)
{
    printf("%d", fun(5));
    return 0;
}
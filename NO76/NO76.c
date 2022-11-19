// 题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。

// 程序分析：无。
#include <stdio.h>

double evenumber(int n)
{
    double s = 0, a = 0;
    int i;
    for (i = 2; i <= n; i += 2)
    {
        a = (double)1 / i;
        s += a;
    }
    return s;
}
double oddnumber(int n)
{
    double s = 0, a = 0;
    int i;
    for (i = 1; i <= n; i += 2)
    {
        a = (double)1 / i;
        s += a;
    }
    return s;
}

int main()
{

    int i = 2;
    double (*no77)(int);
    if (i % 2)
    {
        no77 = oddnumber;
    }
    else
    {
        no77 = evenumber;
    }
    printf("%lf", no77(i));

    return 0;
}
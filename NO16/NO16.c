// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 程序分析：
// （1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；

// （2）求最大公约数用辗转相除法（又名欧几里德算法）

// 1）证明：设c是a和b的最大公约数，记为c=gcd(a,b),a>=b,
// 令r=a mod b
// 设a=kc，b=jc，则k，j互素，否则c不是最大公约数
// 据上，r=a-mb=kc-mjc=(k-mj)c
// 可知r也是c的倍数，且k-mj与j互素，否则与前述k，j互素矛盾,
// 由此可知，b与r的最大公约数也是c，即gcd(a,b)=gcd(b,a mod b)，得证。

// 2）算法描述：

// 第一步：a ÷ b，令r为所得余数（0≤r 第二步：互换：置 a←b，b←r，并返回第一步。

#include <stdio.h>

int gcd(int a, int b)
{
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int lcm(int a, int b)
{
    int gcd_ab = gcd(a, b);
    return (a * b) / gcd_ab;
}

int main(int argc, char **argv)
{
    int m, n;
    printf("请输入两个整数 用','隔开");
    scanf("%d,%d", &m, &n);

    printf("\n(%d,%d) = %d ", m, n, gcd(m, n));
    printf("\n[%d,%d] = %d ", m, n, lcm(m, n));

    return 0;
}
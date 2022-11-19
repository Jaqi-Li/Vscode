// 题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下： 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。

#include <stdio.h>

void encode(int *x)
{
    int i;
    int result = 0;
    for (i = 1; i <= 4; ++i)
    {
        result = result * 10 + ((*x % 10 + 5) % 10);
        *x /= 10;
    }
    *x = result;
}

int main()
{
    int test = 1234;
    encode(&test);
    printf("%d", test);
    return 0;
}
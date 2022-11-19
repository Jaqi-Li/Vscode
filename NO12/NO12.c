// ��Ŀ���ж� 101 �� 200 ֮���������

// ����������ж������ķ�������һ�����ֱ�ȥ�� 2 �� sqrt(�����)������ܱ����������������������������֮��������

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int a)
{
    int i;
    for (i = 2; i < sqrt(a); ++i)
    {
        if (0 == (a % i))
            return false;
    }

    return true;
}

int main(int argc, char **argv)
{

    int i;

    for (i = 101; i <= 200; ++i)
    {
        if (isPrime(i))
            printf("%d\t", i);
    }
    return 0;
}
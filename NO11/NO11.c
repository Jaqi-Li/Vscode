// ��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�

// ������������ӵĹ���Ϊ����1,1,2,3,5,8,13,21....�����¸�������������֮�ͣ��ӵ������¿�ʼ����

#include <stdio.h>

void printArr(int arry[], int length)
{
    int i;
    for (i = 0; i < length; ++i)
    {
        printf("%d ", arry[i]);
    }
}

int main(int argc, char **argv)
{
    int res[40];
    int i;
    for (i = 0; i < 40; ++i)
    {
        if (i < 2)
        {
            res[i] = 1;
        }
        else
        {
            res[i] = res[i - 1] + res[i - 2];
        }
    }

    printArr(res, 40);

    return 0;
}

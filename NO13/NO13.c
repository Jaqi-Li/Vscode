// ��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� �������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���

// �������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    int x, y, z;
    int temp;
    for (i = 100; i < 1000; ++i)
    {
        temp = i;
        x = temp % 10;
        temp = temp / 10;
        y = temp % 10;
        temp = temp / 10;
        z = temp % 10;

        if (x * x * x + y * y * y + z * z * z == i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
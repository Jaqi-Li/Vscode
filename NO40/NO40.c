// 题目：将一个数组逆序输出。

// 程序分析：用第一个与最后一个交换。

#include <stdio.h>

void reverse(int *arr, int length)
{
    int i;
    int temp;
    for (i = 0; i < length / 2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main(int argc, char **argv)
{
    int arr[5] = {0, 1, 2, 3, 4};
    int i;

    reverse(arr, 5);
    for (i = 0; i < 5; ++i)
        printf("%d ", arr[i]);
}
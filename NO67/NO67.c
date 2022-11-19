// 题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

// 程序分析：谭浩强的书中答案有问题。

#include <stdio.h>

void swap(int *arr, int des, int src)
{
    int temp;
    temp = arr[des];
    arr[des] = arr[src];
    arr[src] = temp;
}

int main()
{

    int arr[] = {12, 123, 4, 65, 21};
    int i;
    int min = 0, max = 0;
    for (i = 0; i < 5; ++i)
    {
        if (arr[i] < arr[min])
            min = i;
        if (arr[i] > arr[max])
            max = i;
    }
    swap(arr, 0, max);
    swap(arr, 4, min);

    for (i = 0; i < 5; ++i)
        printf("%d ", arr[i]);

    return 0;
}
// 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

// 程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。

#include <stdio.h>

void insert(int *arr, int *curLength, int element)
{
    int index = *curLength - 1;
    int rear = *curLength;

    while (arr[index] > element && index > 0)
    {
        index /= 2;
    }
    while (arr[index] <= element && index < *curLength)
    {
        index++;
    }
    
    while (rear > index)
    {
        arr[rear] = arr[rear-1];
        rear--; 
    }
    arr[rear] = element;
    (*curLength)++;

}

int main(int argc, char **argv)
{
    int arr[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int Elem_num = 10;
    int i;

    insert(arr, &Elem_num, 0);
    for (i = 0; i < Elem_num; ++i)
        printf("%d ", arr[i]);
    

    return 0;
}
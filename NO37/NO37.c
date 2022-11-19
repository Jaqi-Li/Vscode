// 题目：对10个数进行排序。

// 程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。

#include <stdio.h>

void swap(int *array, int dst, int src)
{
    if (dst == src)
        return;
    int temp;
    temp = array[src];
    array[src] = array[dst];
    array[dst] = temp;
}

void select_sort(int *array, int length)
{
    int max_index;
    int i, j;
    for (i = 0; i < length - 1; ++i)
    {
        max_index = i;
        for (j = i + 1; j < length; ++j)
        {
            if (array[j] > array[max_index])
                max_index = j;
        }
        swap(array, i, max_index);
    }
}

int main(int argc, char **argv)
{
    int arr[10] = {7, 5, 345, 7, 89, 546, 9, 4, 2134, 5};
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d ", arr[i]);

    printf("\n");
    select_sort(arr, 10);
    for (i = 0; i < 10; ++i)
        printf("%d ", arr[i]);
    return 0;
}
// 题目：创建一个链表。

// 程序分析：无。

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;

LNode *createList_rear(int *arr, int length)
{
    LNode *head = (LNode *)malloc(sizeof(LNode));
    LNode *p, *rear;
    rear = head;
    int i;
    for (i = 0; i < length; ++i)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->data = arr[i];
        rear->next = p;
        rear = p;
    }
    rear->next = NULL;
    return head;
}

LNode *createList_head(int *arr, int length)
{
    LNode *head = (LNode *)malloc(sizeof(LNode));
    LNode *p;

    head->next = NULL;

    int i;
    for (i = 0; i < length; ++i)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->data = arr[i];
        p->next = head->next;
        head->next = p;
    }
    return head;
}

void printList(LNode *List)
{
    LNode *p = List->next;
    while (p)
    {
        printf("%d  ", p->data);
        p = p->next;
    }
}

int main()
{
    int arr[] = {5, 4, 7, 2, 2, 2, 8, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", length);
    LNode *head, *rear;
    head = createList_head(arr, length);
    rear = createList_rear(arr, length);

    printf("head: ");
    printList(head);
    printf("\nrear:");
    printList(rear);

    return 0;
}
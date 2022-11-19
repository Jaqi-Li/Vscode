// 题目：反向输出一个链表。　

// 程序分析：无。

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;

LNode *createList(int *arr, int length)
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

LNode *createList_head(LNode *List)
{
    LNode *head = (LNode *)malloc(sizeof(LNode));
    LNode *p;

    head->next = NULL;

    int i;
    while (List->next)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->data = List->next->data;
        p->next = head->next;
        head->next = p;
        List = List->next;
    }
    return head;
}

void connectList(LNode *first, LNode *second)
{
    while (first->next)
    {
        first = first->next;
    }
    first->next = second->next;
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
    LNode *first, *second;
    first = createList(arr, length);
    second = createList_head(first);
    printf("first: ");
    printList(first);

    printf("\nsecond: ");
    printList(second);

    connectList(first, second);

    printf("\nconnected: ");
    printList(first);

    return 0;
}
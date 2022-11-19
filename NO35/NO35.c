// 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

// 程序分析：无。

#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int head, rear;
    char temp;
    for (head = 0, rear = strlen(str) - 1; head < rear; head++, rear--)
    {
        temp = str[head];
        str[head] = str[rear];
        str[rear] = temp;
    }
}

int main(int argc, char **argv)
{
    char str[100] = "www.runoob.com";
    reverse(str);
    printf("%s", str);
    return 0;
}
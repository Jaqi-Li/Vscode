// 题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。

// 程序分析：无。

#include <stdio.h>

int len(char *str)
{
    int i;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100] = {0};
    printf("输入字符串：");
    scanf("%s", str);

    printf("%d", len(str));

    return 0;
}
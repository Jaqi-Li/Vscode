// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

// 程序分析：利用while语句,条件为输入的字符不为'\n'。

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[100];
    int len;
    int i;

    int letter = 0;
    int space = 0;
    int number = 0;
    int other = 0;
    printf("请输入：");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len; ++i)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            letter++;
        else if (str[i] >= '0' && str[i] <= '9')
            number++;
        else if (str[i] == ' ')
            space++;
        else
            other++;
    }

    printf("字母:%d\n数字:%d\n空格:%d\n其他:%d\n", letter, number, space, other);

    return 0;
}
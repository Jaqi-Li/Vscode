// 题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

// 程序分析：无。

#include <stdio.h>
#include <string.h>

char *delete (char *str, char *del)
{
    int i;
    int hash[26];
    int str_index = 0;
    if (NULL == del)
        return str;
    for (i = 0; i < 26; ++i)
        hash[i] = 0;
    for (i = 0; i < strlen(del); ++i)
        hash[del[i] - 'a'] = 1;
    for (i = 0; i < strlen(str); ++i)
    {
        if (!hash[str[i] - 'a'])
            str[str_index++] = str[i];
    }
    str[str_index] = '\0';
    return str;
}

int main(int argc, char **argv)
{
    char str[100] = "asoidyuoihrqwejkgkzxcv ;tljyowesuib sd";
    char del[10] = "s";

    printf("%s\n", delete (str, del));
    return 0;
}
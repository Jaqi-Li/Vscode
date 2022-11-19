// 题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

#include <stdio.h>

int main(int argc, char **argv)
{

    int i, j, k;
    for (i = 0; i < 3; ++i)
    {
        if (i == 0)
            continue;
        for (j = 0; j < 3; ++j)
        {
            for (k = 0; k < 3; ++k)
            {
                if (k == 0 || k == 2)
                    continue;
                if (i != j && i != k && j != k)
                    printf("a:%c\nb:%c\nc:%c\n", i + 'x', j + 'x', k + 'x');
            }
        }
    }

    return 0;
}
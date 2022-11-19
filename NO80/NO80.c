// 题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？

// 程序分析：无。
#include <stdio.h>

int main()
{
    int x;
    int i;
    int final = 1;
    int remain;

    while (1)
    {
        remain = final * 4;
        for (i = 0; i < 5; ++i)
        {
            if (remain % 4 != 0)
            {
                break;
            }
            remain = (remain / 4) * 5 + 1;
        }
        if (i == 5)
        {
            break;
        }
        else
        {
            final++;
        }
    }

    printf("%d", remain);
    return 0;
}
// 题目：#include 的应用练习。

// 程序分析：无。

// 程序源代码：

// test.h 文件代码如下：
// #define LAG >
// #define SMA <
// #define EQ ==

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include "test.h"
#include <stdio.h>

int main()
{
    int i = 10;
    int j = 20;
    if (i LAG j)
        printf("%d 大于 %d \n", i, j);
    else if (i EQ j)
        printf("%d 等于 %d \n", i, j);
    else if (i SMA j)
        printf("%d 小于 %d \n", i, j);
    else
        printf("没有值。\n");
    return 0;
}
// 题目：学习使用按位或 |。

// 程序分析：0|0=0; 0|1=1; 1|0=1; 1|1=1 。

// 程序源代码：

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a, b;
    a = 077;
    b = a | 3;
    printf("b 的值为 %d \n", b);
    b |= 7;
    printf("b 的值为 %d \n", b);
    return 0;
}
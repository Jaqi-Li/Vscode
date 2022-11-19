// 题目：利用ellipse and rectangle 画图（在TC中实现）。

// 程序分析：无。

// 程序源代码：

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include "stdio.h"
#include "graphics.h"
#include "conio.h"
main()
{
    int driver = VGA, mode = VGAHI;
    int i, num = 15, top = 50;
    int left = 20, right = 50;
    initgraph(&driver, &mode, "");
    for (i = 0; i < num; i++)
    {
        ellipse(250, 250, 0, 360, right, left);
        ellipse(250, 250, 0, 360, 20, top);
        rectangle(20 - 2 * i, 20 - 2 * i, 10 * (i + 2), 10 * (i + 2));
        right += 5;
        left += 5;
        top += 10;
    }
    getch();
}
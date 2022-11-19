//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>
#define MAX
#define MAXIMUM(x, y) (x > y) ? x : y
#define MINIMUM(x, y) (x > y) ? y : x
int main()
{
    int a = 10, b = 20;
#ifdef MAX
    printf("更大的数字是 %d\n", MAXIMUM(a, b));
#else
    printf("更小的数字是 %d\n", MINIMUM(a, b));
#endif
#ifndef MIN
    printf("更小的数字是 %d\n", MINIMUM(a, b));
#else
    printf("更大的数字是 %d\n", MAXIMUM(a, b));
#endif
#undef MAX
#ifdef MAX
    printf("更大的数字是 %d\n", MAXIMUM(a, b));
#else
    printf("更小的数字是 %d\n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN
    printf("更小的数字是 %d\n", MINIMUM(a, b));
#else
    printf("更大的数字是 %d\n", MAXIMUM(a, b));
#endif
    return 0;
}
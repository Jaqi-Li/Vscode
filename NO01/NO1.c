#include<stdio.h>
#include<stdlib.h>

// 题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

// 程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。

int main(){
    int i,j,k;
    for (i = 1; i <= 4; ++i){
        for (j = 1; j <= 4;++j){
            if (j == i) continue;
            for (k = 1; k <=4;++k){
                if (k == i || k == j) continue;
                printf("%d\n",i*100 + j * 10 + k);
            }
        }
    }
}
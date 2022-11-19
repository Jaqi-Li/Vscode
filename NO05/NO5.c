// 题目：输入三个整数x,y,z，请把这三个数由小到大输出。

// 程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *x, int *y, int *z)
{
	if (*x > *y)
		swap(x, y);
	if (*x > *z)
		swap(x, z);
	if (*y > *z)
		swap(y, z);
}

int main(int argc, char **argv)
{
	int x, y, z;
	printf("请输入三个整数(用','隔开):");
	scanf("%d,%d,%d", &x, &y, &z);

	printf("\nx=%d,y=%d,z=%d", x, y, z);
	sort(&x, &y, &z);
	printf("\nx=%d,y=%d,z=%d", x, y, z);

	return 0;
}
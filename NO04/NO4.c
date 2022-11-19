// 题目：输入某年某月某日，判断这一天是这一年的第几天？

// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

#include <stdio.h>
#include <stdbool.h>

bool isloop_year(int year)
{
	if (0 == year % 4)
	{
		if (0 == year % 400 || 0 != year % 100)
			return true;
	}
	return false;
}

int days_before(int month)
{
	switch (month)
	{
	case 2:
		return 31;
	case 3:
		return 59;
	case 4:
		return 90;
	case 5:
		return 120;
	case 6:
		return 151;
	case 7:
		return 181;
	case 8:
		return 212;
	case 9:
		return 243;
	case 10:
		return 273;
	case 11:
		return 304;
	case 12:
		return 334;
	default:
		return 0;
	}
}

int main(int argc, char **argv)
{
	int year, month, day;
	int res = 0;
	printf("请输入年月日，用逗号隔开：");
	scanf("%d,%d,%d", &year, &month, &day);

	res = days_before(month);
	if (isloop_year(year))
	{
		if (month > 2)
		{
			res += 1;
		}
	}
	res += day;
	printf("\n%d",res);

	return res;
}
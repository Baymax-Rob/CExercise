// 判断某一年是否是闰年

#include <stdio.h>
int main(void)
{
  int year,leap;
  printf("Please input a year's number: ");
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // 能被4整除并且能被400整除那么该年是闰年
  leap = 1;
  else
  leap = 0;
  if (leap != 0)
  printf("%d是闰年\n", year);
  else
  printf("%d不是闰年\n", year);
  
  return 0;
}

// 输入两个实数，按有小到大的顺序输出这两个数

#include<stdio.h>
int main(void)
{
  int a,b,t;
  scanf("%d %d", &a, &b); //注意输入格式 
  if(a > b)
  {
    t = a;
    a = b;
    b = a;
  }
  printf("%d,%d",a,b);
  return 0;
}

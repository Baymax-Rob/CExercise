// 输入两个实数，按由小到大的顺序输出这两个数

#include <stdio.h>

int main(void)
{
  int a,b,t;
  scanf("%d, %d",&a, &b);
  if(a > b)
  {
    t = a;
    a = b;
    b = t;
  }
  printf("%d,%d\n", a,b);
  return 0;
}

// 求Fibonaccl数列的前40个数

#include <stdio.h>
int main(void)
{
  int i, f1 = 1, f2 = 1, f3;
  printf("%15d\n15%d\n", f1, f2);
  for (i = 1:i < 39; i++)
  {
    f3 = f2 + f1;
    printf("%15d\n", f3);
    f1 = f2;
    f2 = f3;
  }
  printf("\n");
  return 0;
}

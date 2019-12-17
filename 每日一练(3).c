// 大写字母转换为(输出)小写字母

#include <stdio.h>
int main(void)
{
  char a,b;
  printf("Please input two characters: ");
  scanf("%c %c", &a, &b);
  a = a + 32;
  b = b + 32;
  printf("%c\n%c\n",a,b);
  
  return 0;
}

// 用温度计测量出用华氏度表示温度（如 64°F），把它转换为以摄氏度表示的温度(如17.8)
// 华氏度：fahrenheit，摄氏度: centigrade
#include <stdio.h>
int main(void)
{
  float fahrenheit,centigrade;
  fahrenheit = 64.0;
  centigrade = (5.0 / 9) * (fahrenheit - 32);     // 华氏度转换为摄氏度公式: c = 5 / 9 (f - 32)
  // 注意:这里应该是5.0 / 9
  printf("f = %f\nc = %f\n", fahrenheit, centigrade);
  
  return 0;
}

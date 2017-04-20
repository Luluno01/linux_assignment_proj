#include "include/ops.h"

int getLength(char *str)
{
  int i = 0;
  while(str[i])
  {
    i++;
  }
  return i;
}

void rev(char *str)
{
  int i, len = getLength(str);
  char tmp;
  for(i = 0; i < len / 2; i++)
  {
    tmp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = tmp;
  }
}

#include <stdio.h>
#include "include/ops.h"

int main()
{
  char str[81];
  printf("Please enter a string:\n");
  scanf("%s", str);
  printf("Please select an operation:\n1 for reverse, 2 for count length.\n");
  int op;
  scanf("%d", &op);
  switch(op)
  {
    case 1: rev(str); printf("%s\n", str); break;
    case 2: printf("%d\n", getLength(str)); break;
    default: printf("Invalid operation. :(\n");
  }

  return 0;
}

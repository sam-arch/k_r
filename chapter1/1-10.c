#include <stdio.h>
/* replaces hard to see chars with their scopeable (lol) equivalents */

main()
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    if (c == '\b')
      printf("\\b");
    if (c == '\\')
      printf("\\\\");
    if (c != '\t')
      if (c != '\b')
        if (c != '\\')
          putchar(c);
  }
}

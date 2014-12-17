#include <stdio.h>

/* replaces strings of blanks with 1 blank */

main()
{
  int c;
  int nb = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (nb == 0)
        printf("%c", c);/* notice the %c for characters */
      ++nb;
    }
    if (c != ' ') {
      printf("%c", c);
      nb = 0;
    }
  }
}

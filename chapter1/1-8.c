#include <stdio.h>
/* counts blanks, tabs and newlines */

main()
{
  int nl, nt, nb;
  int c;

  nl = nt = nb = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++nb;
  }

  printf("nl = %d, nb = %d, nt = %d\n", nl, nb, nt);
}

#include <stdio.h>
#define IN 1
#define OUT 0

/* prints its input one word per line */

main()
{
  int c;
  int state, lastc;

  state = OUT;


  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) 
        putchar('\n');
      state = OUT; 
    }
    else if (state == OUT) {
      state = IN;
      putchar(c);
    } else 
      putchar(c);
  }
}

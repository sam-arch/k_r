#include <stdio.h>
/*prints the table of fahr to celsius in reverse order
  from 300 to 0 */
main()
{
  int fahr;

  printf("fahrenheit\tCelsius\n");
  for (fahr = 300; fahr >= 0; fahr = fahr - 20) 
    printf("%10d\t%7.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
}

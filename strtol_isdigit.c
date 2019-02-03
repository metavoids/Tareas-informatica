/* strtol example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */
#include <ctype.h>

int main ()
{
  char string[] = "manuel_87550";
  char *pEnd;
  int i=0;
  int numero;
  while(isdigit(string[i])==0)
  i++;
  pEnd=&string[i];
  numero = strtol(pEnd,NULL,10);
  printf ("El numero es %d",numero);
  return 0;
}

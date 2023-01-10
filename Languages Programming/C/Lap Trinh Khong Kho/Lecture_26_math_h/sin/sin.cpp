
/* sin example */
#include <stdio.h>      /* printf */
#include <math.h>       /* sin */
 
#define PI 3.14159265
 
int main ()
{
  double param, result;
  param = 30.0;
  result = sin (param*PI/180);
  printf ("The sine of %lf degrees is %lf.\n", param, result );
  return 0;
}
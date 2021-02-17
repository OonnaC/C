#include "foncG.h"

// Specification :
// g encode une maniere de sommer les valeurs absolues de x, y et z 

int g(int x, int y, int z)
{
  int r=0;
  if (x>0) r=r+x;
  else r=r-x;
  if (y>0) r=r-y;
  else r=r+y;
  if (z>0) r=r+z;
  else r=r-z;
  return r;
}


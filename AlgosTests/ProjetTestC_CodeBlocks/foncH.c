#include "foncH.h"

// Specification :
// h encode une maniere de sommer les valeurs absolues de x, y et z 

int h(int x, int y, int z)
{
  int r=0, i;
  int t[]={x,y,z};
  for(i=0;i<3;i++)
    if (t[i]>=0) r=r+t[i];
    else r=r-t[i];
  return r;
}

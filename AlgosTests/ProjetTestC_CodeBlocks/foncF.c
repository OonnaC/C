#include "foncF.h"

// Specification :
// f encode une maniere de sommer les valeurs absolues de x, y et z 

int f(int x, int y, int z)
{
  if (x>0)
    if (y>0)
      if (z>0) return x+y;
      else return x+y-z;
    else if (z>0) return x-y+z;
         else return x-y-z;
  else if (y>0)
         if (z>0) return x+y+z;
	 else return x-y-z;
       else if(z>0) return x+y+z;
            else return x+y-z;
}

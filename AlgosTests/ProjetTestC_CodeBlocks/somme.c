#include "somme.h"

int sumto(int n)
{
  if (n>0) return n+sumto(n-1);
  else return 0; 
}

#include "facto.h"

int facto(int n)
{
  if (n>1) return n*facto(n-1);
  else return 1; 
}

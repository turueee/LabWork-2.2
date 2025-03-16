#include "TComplex.h"

int main()
{
  TComplex<double> a(6, 4), b(2,1), c;
  bool i;
  c = a.ImPow(b);
  cout << c;
}
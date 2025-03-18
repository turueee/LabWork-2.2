#include "TComplex.h"

int main()
{
  TComplex<double> a(0, 0), b(3,0), c;
  bool i;
  c = a.ImPow(b);
  cout << c;
}
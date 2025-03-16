#include "TComplex.h"

int main()
{
  TComplex<double> a(0, 1), b(1, 1), c;
  bool i;
  c = a.ImPow(b);
  cout << c;
}
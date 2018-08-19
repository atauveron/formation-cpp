#include <iostream>

#include "complex.h"

int main ()
{
  complex<int> a (4,3);
  complex<int> b (a);
  complex<double> c, d;
  d = c;
  std::cout << "Norm of b: " << b.norm() << std::endl;
  std::cout << "Norm of d: " << d.norm() << std::endl;
  return 0;
}

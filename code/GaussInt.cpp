#include <iostream>
#include <cmath>

class GaussInt {
private:
  int m_real;
  int m_imag;
public:
  GaussInt (int a=0, int b=0): m_real(a), m_imag(b) {}
  ~GaussInt () {}
  GaussInt (GaussInt &a): m_real(a.m_real), m_imag(a.m_imag) {}
  double norm () { return std::sqrt(m_real*m_real + m_imag*m_imag); }
};

int main ()
{
  GaussInt a;
  GaussInt b (4,3);
  GaussInt c (b);
  GaussInt d = a;
  std::cout << "Norm of c: " << c.norm() << std::endl;
  std::cout << "Norm of d: " << d.norm() << std::endl;
  return 0;
}

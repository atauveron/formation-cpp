#include <iostream>
#include <cmath>

constexpr int factorial(int n) {
  return n <= 1 ? 1 : (n * factorial(n - 1));
}

class GaussInt {
private:
  int m_real;
  int m_imag;
public:
  constexpr GaussInt (int a=0, int b=0): m_real(a), m_imag(b) {} 
  constexpr double norm () const { return std::sqrt(m_real*m_real + m_imag*m_imag); }
  constexpr GaussInt operator+(const GaussInt &other) const {
    return GaussInt(this->m_real + other.m_real, this->m_imag + other.m_imag);
  }
};

int main ()
{
  constexpr GaussInt a;
  constexpr GaussInt b (2,2);
  constexpr GaussInt c (2,1);
  constexpr GaussInt d (b + c);
  constexpr double a_norm =  a.norm();
  std::cout << "Norm of a: " << a_norm << std::endl;
  std::cout << "Norm of d: " << d.norm() << std::endl;
  constexpr auto fac = factorial(5);
  std::cout << "Factorial of 5 is " << fac << std::endl;
  return 0;
}

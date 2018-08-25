#ifndef complex_h_included
#define complex_h_included

#include <cmath>

template<typename T> class complex {
private:
  T m_real;
  T m_imag;
public:
  // Contructor and destructor
  complex (const T &a = T(), const T &b = T());
  ~complex ();
  complex (const complex<T> &);
  complex<T>& operator= (const complex<T> &);
  //
  double norm ();
};

template<typename T> complex<T>::complex (const T &a, const T &b):
  m_real(a), m_imag(b)
{}
template<typename T> complex<T>::~complex () {}
template<typename T> complex<T>::complex (const complex<T> &a):
  m_real(a.m_real), m_imag(a.m_imag)
{}
template<typename T> complex<T>& complex<T>::operator= (const complex<T> &a) {
  m_real = a.m_real; m_imag = a.m_imag;
  return *this;
}

template<typename T> double complex<T>::norm () {
  return std::sqrt( m_real*m_real + m_imag*m_imag );
}

#endif // complex_h_included

#include <iostream>

int main () {
  int a (2);
  int b (a);
  int &c (a);
  int *d = &a; // address of a
  std::cout << "a is: " << a << "\n";
  std::cout << "b is: " << b << "\n";
  std::cout << "c is: " << c << "\n";
  std::cout << "d is: " << *d << "\n"; /* the value pointed to by d */
  return 0;
}

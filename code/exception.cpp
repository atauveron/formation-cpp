#include <iostream>
#include <exception>

void f () {
  throw std::runtime_error("an error occured in function f");
}

int main () {
  try {
    f();
    std::cout << "No error\n";
  } catch (std::exception &e) {
    std::cout << "Error detected: " << e.what() << '\n';
  }
  return 0;
}

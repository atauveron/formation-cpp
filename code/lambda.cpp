#include <iostream>
#include <vector>
#include <algorithm>

/*
 * C++11 (or later) must be enabled
 */

namespace {
  void f (int i) {
    std::cout << i << ' ';
  }
}

int example () {
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  vec.push_back(50);
  
  // Using a functor
  for_each(vec.begin(), vec.end(), f);
  std::cout << '\n';
  // Using a lambda
  for_each(vec.begin(), vec.end(), [](int i) {
      std::cout << i << ' ';
    } );
  std::cout << '\n';
  
  return 0;
}

int example_double () {
  std::vector<double> position;
  position.push_back(.1);
  position.push_back(.2);
  position.push_back(.3);
  position.push_back(.4);
  position.push_back(.5);

  double scale = 5;

  for_each(position.begin(), position.end(), [&scale](double x) {
      std::cout << scale*x << ' ';
    } );
  std::cout << '\n';

  return 0;  
}

int main () {
  example();
  example_double();
  
  return 0;
}

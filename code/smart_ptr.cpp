#include <iostream>
#include <memory>

/*
 * Warning: for demonstration purposes only!
 *
 * C++11 (or later) must be enabled
 */

int main ()
{
  int *ptr = new int(5);
  std::shared_ptr<int> foo (ptr);
  std::cout << *foo << ' ' << *ptr << '\n';
  {
    std::shared_ptr<int> bar (ptr);
    std::cout << *foo << ' ' << *bar << ' ' << *ptr << '\n';
  }
  /* The objetc pointed to by foo and ptr has been destroyed
   * (because bar went out of scope).
   */
  std::cout << *foo << ' ' << *ptr << '\n';
  return 0;
}

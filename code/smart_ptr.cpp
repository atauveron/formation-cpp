#include <iostream>
#include <memory>

/*
 * Warning: for demonstration purpouses only!
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
  /* The objetc pointed to by foo and ptr has benn destroyed
   * (because bar went out of scope).
   */
  std::cout << *foo << ' ' << *ptr << '\n';
  return 0;
}

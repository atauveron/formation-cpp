#include <iostream>
#include <cstring>

class blob {
private:
  size_t m_size;
  char *m_data;
  
public:

  blob (): m_size(0), m_data(nullptr) {}
  
  blob (const char* d, size_t s): m_size(s) {
    if (m_size) {
      m_data = new char[m_size];
      memcpy(m_data, d, m_size);
    } else {
      m_data = nullptr;
    }
  }
  
  ~blob () {
    delete[] m_data;
  }

  blob (const blob& other): m_size(other.m_size) {
    if (m_size) {
      m_data = new char[m_size];
      memcpy(m_data, other.m_data, m_size);
    } else {
      m_data = nullptr;
    }
  }

  // blob (blob&& other) {
  //   m_size = other.m_size;
  //   m_data = other.m_data;
  //   other.m_size = 0;
  //   other.m_data = nullptr;
  // }

  friend void swap (blob& first, blob& second) {
    using std::swap;
    //
    swap(first.m_size, second.m_size);
    swap(first.m_data, second.m_data);
  }

  blob (blob&& other): blob() {
    swap(*this, other);
  }

  blob& operator= (blob other) {
    swap(*this, other);
    return *this;
  }
};

blob create_blob () {
  char hello [] = "Hello world!";
  blob res (hello, 13);
  return std::move(res);
}

int main ()
{
  blob test;
  blob hello (create_blob());
  test = hello;
  return 0;
}

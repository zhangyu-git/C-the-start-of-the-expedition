#include <iostream>
#include <stdlib.h>

namespace A
{
  int x = 1;
  void fun()
  {
    std::cout << "A" << std::endl;
  }
}

namespace B
{
  int x = 2;
  void fun()
  {
    std::cout << "B" << std::endl;
  }
  void fun2()
  {
    std::cout << "2B" << std::endl;
  }
}

using namespace B;
int main(void)
{
  std::cout << A::x << std::endl;
  B::fun();
  fun2();
  
  return 0;
}
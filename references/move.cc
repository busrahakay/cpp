#include <utility>

class A {};

int main()
{
  A a;
  A &&r1 = static_cast<A &&>(a);
  A &&r2 = std::move(a);
}

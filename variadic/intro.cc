#include <iostream>

using namespace std;

template <typename ...N>
void foo()
{
  cout << __PRETTY_FUNCTION__ << endl;
  cout << sizeof...(N) << endl;
}

int
main()
{
  foo<>();
  foo<int>();
  foo<bool, double>();
}

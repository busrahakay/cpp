#include <iostream>
#include <string>

using namespace std;

template <typename T>
void
print(const T &t)
{
  cout << t << endl;
}

int
main()
{
  print(1);
  print<int>(0.5);
  print<double>(0.5);
  print("Hello!");
  print(string("Hello!"));
}

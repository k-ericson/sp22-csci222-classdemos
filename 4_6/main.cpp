#include "frac.h"
#include <iostream>

using namespace std;

int main() {
  Frac a(3, 8);
  Frac b(5, 2);
  cout << "Frac a: " << a << "\tFrac b: " << b << endl;

  cout << "a + b: " << (a + b) << endl;

  cout << "b + a: " << (b.operator+(a)) << endl;
  
  return 0;
}

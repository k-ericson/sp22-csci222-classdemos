#include <iostream>

using namespace std;

int main() {
  double a, b, c;

  a = 1.345d;
  b = 1.123d;
  c = a + b;  // should be: 2.468


  if (c == 2.468) {
    cout << c << " == " << 2.468 << endl;
  }
  else {
    cout << c << " != " << 2.468 << endl;
  }

  int i, j;
  i = 1;
  j = 2;
  double d = id / j;

  cout << "d: " << d << endl;

  return 0;
}

#include "frac.h"

using namespace std;

Frac Frac::operator+(const Frac &rhs) {
  int newdenom = denom * rhs.denom;
  int newnum = num * rhs.denom + rhs.num * denom;
  //Frac res(newnum, newdenom);
  //return res;
  return Frac(newnum, newdenom);
}

Frac::Frac(int n, int d) {
  num = n;
  denom = d;
}

ostream& operator<<(ostream &stream, const Frac &rhs) {
  stream << rhs.num << "/" << rhs.denom;
  return stream;
}

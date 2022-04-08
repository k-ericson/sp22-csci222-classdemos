#ifndef FRAC_H
#define FRAC_H
#include <iostream>

class Frac {
 private:
  int num;
  int denom;

 public:
  Frac(int n, int d);
  Frac operator+(const Frac &rhs);
  friend std::ostream& operator<<(std::ostream &stream, const Frac &rhs);
  
  
};

#endif //FRAC_H

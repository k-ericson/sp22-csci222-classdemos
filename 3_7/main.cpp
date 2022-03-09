
#include <iostream>
#include "Rectangle.h"

using namespace std;

void testing(Shape & s);

int main() {
  Shape s;
  testing(s);
  Shape parS("blue", "Shapey");
  testing(parS);

  Rectangle r;
  testing(r);
  Rectangle parR(1, 2, "orange", "Mr. Triangle");
  testing(parR);
  
  return 0;
}

void testing(Shape & s) {
  s.Print();
  cout << "Area: " << s.Area() << endl;
  cout << "Perimeter: " << s.Perimeter() << endl;
}

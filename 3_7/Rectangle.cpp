#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() : Shape("Hot Ponk", "D. Rectangle") {
  length = width = -1;
}

Rectangle::Rectangle(double l, double w, string c, string n) : Shape(c, n) {
  length = l;
  width = w;
}

double Rectangle::Area() {
  return length * width;
}

double Rectangle::Perimeter() {
  return (length + width) * 2;
}

void Rectangle::Print() {
  Shape::Print();
  cout << "Length: " << length << "\tWidth: "
       << width << endl;
}

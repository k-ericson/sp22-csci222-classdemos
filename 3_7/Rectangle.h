#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
 private:
  double length;
  double width;
 public:
  Rectangle();
  Rectangle(double length, double width, std::string color, std::string name);
  double Area();
  double Perimeter();
  void Print();
};

#endif //RECTANGLE_H

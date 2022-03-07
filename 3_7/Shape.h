/**
 * @file Shape.h
 * @author Kathleen Ericson
 * @date 2022-03-07
 * @brief definition of Shape class
 * 
 * /sigh
 */

#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
 private:
  std::string color;
  std::string name;

 public:
  Shape();
  Shape(std::string color, std::string name);
  double Area();
  double Perimeter();
  void Print();
};

#endif //SHAPE_H

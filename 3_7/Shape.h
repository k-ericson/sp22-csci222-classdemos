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

 protected:
  std::string name;
  
 public:
  Shape();
  Shape(std::string color, std::string name);
  virtual double Area();
  virtual double Perimeter();
  virtual void Print();
};

#endif //SHAPE_H

/**
 * @file Shape.cpp
 * @author Kathleen Ericson
 * @date 2022-03-07
 * @brief sigh
 * 
 * more sigh
 */

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape() {
  color = "White";
  name = "A. Shape";
}

Shape::Shape(string color, string name) {
  this->color = color;
  this->name = name;
}

double Shape::Area() {
  return -1;
}

double Shape::Perimeter() {
  return -1;
}

void Shape::Print() {
  cout << "Name: " << name << "\nColor: "
       << color << endl;
}

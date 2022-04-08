#include "MyArr.h"
#include <iostream>

using namespace std;

MyArr::MyArr(int siz) {
  this->size = siz;
  garbage = 99999;
  elements = new int[size];
}

MyArr::~MyArr() {
  delete[] elements;
}

int MyArr::retrieve(int idx) {
  if (idx >= 0 && idx < size) {
    return elements[idx];
  }
  cerr << "BAD INDEX!!!!" << endl;
  return garbage;
}

int MyArr::getSize() {
  return size;
}

void MyArr::store(int idx, int val) {
  if (idx >= 0 && idx < size) {
    elements[idx] = val;
    return;
  }
  cerr << "BAD INDEX!!!" << endl;
}

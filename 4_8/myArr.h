#ifndef MYARR_H
#define MYARR_H

class MyArr{
 private:
  int *elements;
  int garbage;
  int size;
 public:
  MyArr(int siz);
  ~MyArr();
  int retrieve(int idx);
  int getSize();
  void store(int idx, int val);
};


#endif //MYARR_H

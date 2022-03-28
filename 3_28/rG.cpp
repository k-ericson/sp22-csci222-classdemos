
#include <iostream>

using namespace std;
int foo2(int arr[], int toFind, int low, int high);

int main() {
  
  
  return 0;
}

int foo2(int arr[], int toFind, int low, int high) {
  int toCheck = (high - low) / 2;
  if (toCheck < 0) {
    return -1;
  }
  toCheck += low;
  if (arr[toCheck] == toFind)
    return toCheck;
}


#include <iostream>

using namespace std;

int main() {
  int * guy;
  cout << "guy: " << guy << endl;
  int size;
  cout << "size: " << size << endl;
  cout << "How big?";
  cin >> size;

  guy = new int[size];
  cout << "guy: " << guy << endl;
  cout << "size: " << size << endl;
  cout << "&size: " << &size << endl;
  cout << "&guy: " << &guy << endl;
  for (int i = 0; i < size; i++) {
    cout << "new num?";
    int num;
    cin >> num;
    guy[i] = num;
  }

  cout << "Your guy: ";
  for (int i = 0; i < size; i++) {
    cout << "guy[" << i << "]: " << *(guy + i) << endl;
  }

  cout << "*guy: " << *guy << endl;
  cout << "*(guy + size + 1): " << *(guy + size + 1) << endl;
  

  delete[] guy;
  
  
  return 0;
}

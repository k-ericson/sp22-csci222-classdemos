
#include <iostream>

using namespace std;

int car2Dig(char c);

int main() {
  char holder;
  cout << "gimme number: ";
  cin >> holder;
  while(holder != 'n') {
    cout << "digit is: " << car2Dig(holder) << endl;
    cout << "gimme number (n to quit): ";
    cin >> holder;
  }
  
  return 0;
}

int car2Dig(char c) {
  return c - '0';
}

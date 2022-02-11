#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  for(int i = 1; i <= 12; i++) {
    for(int j = 1; j <= 12; j++) {
      cout << left << setw(4) << i * j;
    }
    cout << '\n';
  }
  
  return 0;
}

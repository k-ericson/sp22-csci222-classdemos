
#include <iostream>
#include <string>

using namespace std;

double div(double a, double b) {
  if (b == 0)
    throw -4.5;
  return a / b;
}

int main() {
  double a, b;
  cout << "A? ";
  cin >> a;
  cout << "B? ";
  cin >> b;
  for (int i = -2; i < 3; i++) {
    try {
    
      cout << "A/B: " << div(a, i*.3) << endl;
      
    } catch (string s) {
      cerr << "Bad thing: " << s << endl;
    } catch (const char* b) {
      cerr << "caught char*: " << b << endl;
    } catch (...) {
      cerr << "caught something???" << endl;
    }
  }
  
  
  return 0;
}

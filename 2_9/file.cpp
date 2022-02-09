
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string fname;
  cout << "file name: ";
  cin >> fname;

  ifstream fin;
  fin.open(fname);

  string helper;
  int i = 0;
  getline(fin, helper);
  while(fin) {
    cout << "Name " << (i+1) << ": " << helper << endl;
    int num;
    fin >> num;
    cout << helper << "'s number: " << num << endl;
    i++;
    fin.get();
    getline(fin, helper);
  }

  cout << "I found " << i << " people in the file" << endl;
  
  return 0;
}

// ;;gdb many windows???
// (setq gdb-many-windows 1)

// ;;windmove?
// (windmove-default-keybindings)

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Gimme filer: ";
  string file;
  cin >> file;

  ifstream fin;
  fin.open(file.c_str());

  string fabName;
  getline(fin, fabName);

  int val;
  int count = 0;
  while(fin) {
    fin >> val;

    cout << "Name: " << fabName << "\n\tNum: " << val << endl;

    count++;
    fin.get();
    getline(fin, fabName);
  }

  cout << "I found " << count << " people" << endl;
  
  return 0;
}


// ;;gdb many windows???
// (setq gdb-many-windows 1)

// ;;windmove?
// (windmove-default-keybindings)
 

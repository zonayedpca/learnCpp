#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
  using namespace std;
  ifstream inFile("Readme.txt");
  if(!inFile) {
    cerr << "Readme.txt not available!" << '\n';
    exit(1);
  }

  std::string inputStr;

  while(inFile) {
    inFile >> inputStr;
    cout << inputStr << endl;
  }
  return 0;
}

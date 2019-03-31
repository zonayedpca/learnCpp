#include<iostream>
#include<fstream>
#include<cstdlib>

int main() {
  using namespace std;
  ofstream ofile("Readme.txt");
  if(!ofile) {
    cerr << "Readme.txt doesn't exist!" << '\n';
    exit(1);
  }
  for(int i = 0; i < 100; ++i) {
    for(int j = 0; j < i; ++j) {
      ofile << "*";
    }
    ofile << endl;
  }
  ofile << "Line 1: Zonayed Ahmed" << endl;
  ofile << "Line 2: Zawad Ahmed" << endl;
  return 0;
}

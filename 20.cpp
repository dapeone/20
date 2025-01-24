#include <iostream>
#include <string>
using namespace std;

int main() {
  int i = 0;
  string str;
  cout << "Введите текст" << endl;
  getline(cin, str);
  
  while (str[i] != ' ') {
    cout << str[i];
    ++i;
  }
  
  ++i;
  cout << " " << str[i] << ". ";
  
  while (str[i] != ' ') {
    ++i;
  }
  ++i;
  cout << str[i] << ". ";
  
}
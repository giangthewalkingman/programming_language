#include <iostream> 

using namespace std; 

istream& operator>>(istream& is, int& x) { 
  is >> x; 
  return is; 
} 

int main() { 
  int x; 
  cin >> x; 
  cout << x; 
  return 0; 
}
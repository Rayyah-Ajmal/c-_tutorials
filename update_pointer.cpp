#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;
  
  cout << food << "\n";
  //memory
  cout << &food << "\n";

  cout << *ptr << "\n";
  // Change the value of the pointer
  *ptr = "Hamburger";
  // Output of new pointer
  cout << *ptr << "\n";
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}
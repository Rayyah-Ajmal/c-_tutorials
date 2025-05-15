#include <iostream>
#include <string>
using namespace std;

int main() {

  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }

  //index and value
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
  } 

    int myNumbers[5] = {10, 20, 30, 40, 50};
  
  // Loop through integers(for each)
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}

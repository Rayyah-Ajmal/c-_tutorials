#include <iostream>
#include <string>
using namespace std;

// structure car
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // create a car structure and store values in car1
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

 // create a car structure and store values in car2
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
  
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}

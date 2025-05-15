#include <iostream>
using namespace std;

int main() {
  //count down 
  int countdown = 3;

  while (countdown > 0) {
    cout << countdown << "\n";
    countdown--;
  }
  cout << "Happy New Year!!\n";
  int j = 0;


  //even numbers between 1 and 10
  cout<<"Even numbers between 1 and 10";
  while (j <= 10) {
    cout << j << "\n";
    j+= 2;
  }


  //reverse a number
int numbers = 12345;
//variable to store the reversed number
int revNumbers = 0;
while (numbers) {
  revNumbers = revNumbers * 10 + numbers % 10;
  numbers /= 10;
}
cout << "Reversed numbers: " << revNumbers << "\n";
return 0;

}

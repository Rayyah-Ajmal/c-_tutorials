#include <iostream>
#include <string>
using namespace std;
int main(){
    string firstName= "John";
    string lastName="Doe";
    string fullName= firstName + lastName;
    cout<<fullName;
    string fullName_2= firstName+ " "+lastName;
    cout<<fullName_2;
    string fullName_3=firstName.append(lastName);
    cout<<fullName_3;
}
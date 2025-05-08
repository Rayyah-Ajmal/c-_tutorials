#include <iostream>
#include <string>
using namespace std;
 int main(){
    string mystring = "Hello";
    cout<<mystring[1]; //accesing the elemnt at first index ie e
    cout<<mystring[mystring.length()-1];//accessing the elemnt at the last position
    mystring[0]='J';
    cout<<mystring;
    cout<<mystring.at(0);//first char
    return 0;
}
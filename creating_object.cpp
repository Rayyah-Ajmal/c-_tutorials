#include <iostream>  
#include <string>
using namespace std;

class Myclass{ //cretaing a class
    public : 
    int myNum;
    string myString;

}
int main(){
    Myclass myObj; //creating an object in class
    //accessing the attributes and vakues
    myObj.myNum=15;
    myObj.myString="Some text";
    cout<<myObj.myNum<"\n";
    cout<<myObj.myString;
    return 0;
}
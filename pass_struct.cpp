#include <iostream>  
using namespace std; 

struct Car{
    string brand;
    int year;
};

void myFunction(Car c){
    cout<<"Brand:"<<c.brand<<",Year:"<<"\n";

}
int main(){
    Car mycar= {"Toyota",2020};
    myFunction(myCar);
    return 0;
}
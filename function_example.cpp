#include <iostream>  
using namespace std; 

float toCelsius(float farenheit){
    return (5.0/9.0)*(farenheit-32.0);

}
int main(){
    //farenheit value
    float f_value =98.8;
    //convert to celsius
    float result= toCelsius(f_value);
    cout<<"Farenheit:"<<f_value<<"\n";
    cout<<"convert farenheit to celcius:"<<result<<"\n";
    return 0;

}

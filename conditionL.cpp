#include <iostream>
using namespace std;

int ctime =22;
int main(){
    if (ctime < 10) {
    cout << "Good morning.";
    } 
    else if (ctime < 20) {
    cout << "Good day.";
    }
    else {
    cout << "Good evening.";
    }
    return 0;
}
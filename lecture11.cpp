// 1. Construct a C++ program that can read
// two integers and compare them either
// equally, larger or smaller. 

#include <iostream>

using namespace std;
int main(void){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if(a > b){
        cout << a << " is larger than " << b << endl;
    } else if(a < b){
        cout << a << " is smaller than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
    return 0;
}
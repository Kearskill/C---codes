#include <iostream>

#define PI 3.14
#define AREA(x) (3.14 * x * x) 
using namespace std;

int main (){
    double x,area;

    cout<<"What is radius?"<<endl;
    cin>>x;
    cout<<"The area is "<<AREA(x)<<"m2"<<endl;
    return 0;
}
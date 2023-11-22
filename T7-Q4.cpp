#include <iostream>
#include <cmath>

#define y(x) (pow(4.0 * pow(x,3) +1.0,5))
#define z(x) (pow((4.0 * pow(x,2)) + 1.0 ,5) * (cos(3.0*x)))

using namespace std;
int main(){
    float x;

    cout<<"What is x = ";
    cin>>x;

    cout<<"y is "<<y(x)<<endl;
    cout<<"z is "<<z(x)<<endl; //z calculation will base on radian 

    return 0;
}
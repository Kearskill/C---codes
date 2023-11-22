#include <iostream>
#define pi 3.14
#define square(x) (x*x)

using namespace std;
int main (){
    //define
    float r, h, volume;

    //prompt
    cout << "Enter the radius of the cylinder(m): ";
    cin>>r;
    cout <<"Enter the height of the cylinder(m): ";
    cin>>h;

    //process
    volume = pi * square(r) * h;

    //cout
    cout <<"The volume of the right circular cylinder is "<<volume<<"m3\n";

    return 0;
}

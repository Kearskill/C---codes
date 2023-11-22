#include <iostream>
#define pi (22/7)
#define h 4.166
#define square(x) (x*x)

using namespace std;

int main(){
    //define 
    float r,s,volume,surfaceArea;

    //prompt
    cout<<"Input radius(m) : ";
    cin>>r;

    cout<<"Input slant(m) : ";
    cin>>s;

    //process
    volume = 1.0/3.0 * pi * square(r) * h;
    surfaceArea = pi * r * s;

    //cout
    cout<< "The volume of the cone is "<<volume<<"m3 \n";
    cout<< "The surface area of the cone is "<<surfaceArea<<"m2 \n";

    return 0;
}
//r2=A/pi and r = sqrt (A/pi)

#include <iostream>
#include <math.h>
#define pi 3.1416
using namespace std;

int main(){
    //we need to give only one input to program i.e., area of circle A
    int A;
    float r;
    cout<<"Enter area of circle A:"<<endl;
    cin>>A;

    r = sqrt (A/pi);
    cout<<"Radius of circle is:"<<r;
    return 0;

}
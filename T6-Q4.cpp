//convert degree to radian then display degree and radian

#include <iostream>
#define pi 3.14
#define convert(x) (x * pi / 180)

using namespace std;

int main(){
    //declare
    float angle;
    //prompt
    cout<<"give angle dayo: ";
    cin>>angle;
    //process
    float radian = convert(angle);

    //output
    cout<<"Angle : "<<angle<<"\n";
    cout<<"Radian : "<<radian;
    return 0;
}
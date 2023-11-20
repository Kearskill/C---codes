#include <iostream>
#define avg(x) (x/3)

using namespace std;

int main()
{
    // Define
    int x,y,z,sum,prod;
    float avg;
    //Prompt
    cout <<"gib x dayo"<<endl;
    cin>>x;
    cout <<"gib y"<<endl;
    cin>>y;
    cout <<"gib z"<<endl;
    cin>>z;
    
    // Process
    sum = x+y+z;
    avg = avg (sum);
    prod = x*y*z;
    
    // Cout
    cout<<"Sum of x,y,z is "<<sum<<endl;
    cout<<"Average of x,y,z is "<<avg<<endl;
    cout<<"Product of x,y,z is "<<prod<<endl;
    

    return 0;
}
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double a = 9.12345678912345678;
    double b = 8.1234567;
    float c = 7 * pow(10,-4);
    
    cout<<setprecision(14)<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
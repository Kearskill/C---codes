#include <iostream>
#include <cmath>
#define QUADRATIC(a, b, c, d) ((-b + (d * sqrt(pow(b,2) -4.0 * a * c)))/(2.0 * a))

using namespace std;

int main(){
    double a=1.0;
    double b=3.0;
    double c=2.0;
    double d=1.0;

    double root1 = QUADRATIC(a, b, c, d);
    double root2 = QUADRATIC(a, b, c, -d);

    cout <<"Root 1 :"<<root1<<endl;
    cout <<"Root 2 :"<<root2<<endl;
    return 0;
}
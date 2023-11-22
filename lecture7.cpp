#define Dtm(a,b,c,d) ((a*d)-(b*c))
#include <iostream>

using namespace std;


int main(){



double m11=1.0;
double m12=2.0;
double m21=3.0;
double m22=4.0;

double determinant = Dtm(m11,m12,m21,m22);
cout <<determinant;
}
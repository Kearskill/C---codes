#include <iostream>
#define rectangleArea(a,b) ((a)*(b)) //this is a macro

using namespace std;

#define SQS(x,y) (x*x) + (y*y)

int main (){
    int a= 5;
    int b = 5;

    cout << "The area of the rectangle is: " << rectangleArea(a,b) << endl;
    return 0;
}




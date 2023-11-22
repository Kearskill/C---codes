#define PI 3.1415926
#include <iostream>
using namespace std;
int main(){
    double radius = 5.0;
    double circleArea = PI * radius * radius;

    std::cout<<"Area of the circle:" <<circleArea <<std::endl;
    return 0;
}
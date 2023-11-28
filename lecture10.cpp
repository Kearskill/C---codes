//multiple line 
//macro
//argument
//parametre

//luar of segi 4 L(w,l) w*l DONE
//slope of line (x1,x2,y1,y2) ((y2-y1)/(x2-x1)) DONE
//jarak line -->J(x1,x2,y1,y2) (sqrt(pow(x2-x1,2)+pow(y2-y1,2)))
//midpoint line --> mdX(x1,x2) ((x1+x2)/2)
//midpoint line --> mdY(y1,y2) ((y1+y2)/2)
//equation of line -- > y = mx + c @y0-y1 = m(x0-x1)

#include <iostream>
#include <cmath>

#define luarSegiEmpat(w,l) (w*l)
#define gradient(x1,x2,y1,y2) ((y2-y1)/(x2-x1))
#define distanceBetweenLines(x1,x2,y1,y2) (sqrt(pow(x2-x1,2)+pow(y2-y1,2)))
#define mdX(x1,x2) ((x1+x2)/2)
#define mdY(y1,y2) ((y1+y2)/2)

using namespace std;

int main(){
    //area
    double l = 5.0;
    double w = 3.0;
    double L_S4 = luarSegiEmpat(w,l);
    cout<<"the area of the rectatngle is "<<L_S4<<endl;

    //gradient
    double x1 = 1.0;
    double x2 = 2.0;
    double y1 = 4.0;
    double y2 = 5.0;

    double slope = gradient(x1,x2,y1,y2);
    cout<<"the slope of line is "<<slope<<endl;

    //distance
    x1 = 2.0;
    x2 = 3.0;
    y1 = 5.0;
    y2 = 4.0;

    double Distance = distanceBetweenLines(x1,x2,y1,y2);
    cout<<"the distance is "<<Distance<<endl;

    //midpoint of x and y

    x1 = 4.0;
    x2 = 5.0;
    y1 = 7.0;
    y2 = 8.0;
    double midPointX = mdX(x1,x2);
    double midPointY = mdY(y1,y2);
    
    cout<<"mid poind of the line  = ("<<midPointX<<","<<midPointY<<")"<<endl;

    //y=mx+c
    double c =3.0;

    cout << "Y="<<slope<<"X+"<<c<<endl;

    return 0;
}

    // if (slope=1.0){
    //     int* slope{};
    // }
#include <iostream>
using namespace std;

#define AREA(L,b) (L*b)

int main(){
    int L1 = 14, L2 = 6, area;

    area = AREA(L1,L2);
    cout << "Area of the rectangle" << "is: "<<area;
    return 0;
}
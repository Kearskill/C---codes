#include <iostream>

using namespace std;

int main (){
    int A = 80;
    int mark;

    cout<<"how much marks !!!"<<endl;
    cin>>mark;

    if (mark>A){
        cout<<"Congratulations! You get A."<<endl;
    } else{
        cout<<"Sorry! You get F."<<endl;
    }
    return 0;
}
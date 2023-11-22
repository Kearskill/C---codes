//Calculate entropy

#include <iostream>
#include <cmath>

#define R 8.31
#define Na (6.02 * pow(10,23))

using namespace std;
int main(){
    //Define
    float wFinal, wInitial, entropyChange;

    //Prompt
    cout << "Please enter the initial thing: ";
    cin>> wInitial;
    cout << "Please enter the final thing: ";
    cin>> wFinal;

    //Process
    entropyChange = (R/Na) * (log10(wFinal) - log10(wInitial));

    //Cout
    cout << "Entropy Change is "<<entropyChange<<"\n";

    return 0;
}
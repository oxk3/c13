#include<iostream>
using namespace std;

int main(){
    double c,f;
    cout << "fahr = ";
    cin >> f;
    c = 5*(f-32)/9;
    cout << "celsius = " << c;
    return 0;
}
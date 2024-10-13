#include<iostream>
#include<cmath>
#define Pi 3.14
using namespace std;

int main(){
    double x ,d, h, V;
    int n;
    cin >> x >> d >> h;
    x *= 1000000;
    V = Pi * (d/2) * (d/2) *h;
    n = ceil(x / V);
    cout << n << endl;
    return 0;
}
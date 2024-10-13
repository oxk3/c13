#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double miles;
    double prices;
    cin >> miles;
    if (miles <= 3){
        prices = 8;
    }
    else{
        prices = 8 + (miles - 3) * 1.6;
        
    }
    cout << fixed << setprecision(1) << prices;
    return 0;

}
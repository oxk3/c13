#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n < 1000 || n > 9999){
        cout << "ERROR" << endl;
    }
    else{
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n /10 % 10;
        int d = n % 10;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}
// 输入一个四位数，假设这个四位数形如ABCD，将AB和CD进行交换，变成一个新四位数形如CDAB。
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A = n / 1000;
    int B = n / 100 % 10;
    int C = n / 10 % 10;
    int D = n % 10;
    cout << C * 1000 + D * 100 + A * 10 + B << endl;
    return 0;  
}
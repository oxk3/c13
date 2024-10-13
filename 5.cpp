#include<iostream>
using namespace std;

int main(){
    string a;
    int nu , de, n;
    cout << "Input numerator/denominator:";
    cin >> a;
    if (a.find('/') != NULL){
        nu = stoi(a.substr(0, a.find('/')));
        de = stoi(a.substr(a.find('/')+1));
    }
    n = nu / de;
    cout << "=" << n << "U" << nu % de<< "/" << de << endl;
    return 0;
}
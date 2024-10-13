// 购买面包。小明一大早就去买新鲜出炉的面包。设每个面包为money元钱，小明共买了number个（money及number由键盘输入），编程求小明共花了多少钱？
#include <iostream>
using namespace std;
int main(){
    double money, number;
    cin >> money >> number;
    cout << money * number;
    return 0;
}
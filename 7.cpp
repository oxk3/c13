// 问题描述】温度转换。摄氏温度与华氏温度之间的换算公式如下：		C＝5/9（F－32）

// 其中，C为摄氏温度，F为华氏温度。请编程完成摄氏温度或华氏温度间的相互转换。

// 转换方式由用户选择：用户输入1，华氏温度转摄氏温度；用户输入2，摄氏转华氏；输入其它选择，输出ERROR。

// 【输入形式】用户先输入1或2，再输入一个要转换的温度

// 【输出形式】输出转换后的对应温度。输出保留小数点后两位。
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    double b;
    cin >> a >> b;
    if (a==1){
        cout << fixed << setprecision(2) << 5.0/9.0*(b-32) << endl;
    }
    if (a==2){
        cout << fixed << setprecision(2) << 9.0/5.0*b+32 << endl;
    }
    if (a!=1 && a!=2){
        cout << "ERROR" << endl;
    }
    return 0;
}
// 鸡兔同笼。大约在1500年前，《孙子算经》中就记载了这个有趣的问题：今有雉兔同笼，上有三十五头，下有九十四足，问雉兔各几何？编程求雉兔各几何。
#include <iostream>
using namespace std;
int main(){
    int head, foot, rabbit, chicken;
    head = 35;
    foot = 94;
    for (rabbit = 0; rabbit <= head; rabbit++){
        chicken = head - rabbit;
        if (2 * rabbit + 4 * chicken == foot){
            cout << chicken << " " << rabbit << endl;
        }
    }
    return 0;
}
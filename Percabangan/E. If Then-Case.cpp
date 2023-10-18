#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a >= 1 && a <= 9){
        cout << "satuan";
    } else if (a >= 10 && a <= 99){
        cout << "puluhan";
    } else if (a >= 100 && a <= 999){
        cout << "ratusan";
    } else if (a >= 1000 && a <= 9999){
        cout << "ribuan";
    } else if (a >= 10000 && a <= 99999){
        cout << "puluhribuan";
    }
}

// https://tlx.toki.id/courses/basic/chapters/05/problems/E/submissions/1587955

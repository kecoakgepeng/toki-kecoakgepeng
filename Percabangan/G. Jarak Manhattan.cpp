#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f, jarak;
	cin >> a >> b >> c >> d;
	e = a - c;
	if(e < 0){
	    e = -e; 
	}
	f = b - d;
	if(f < 0){
	    f = -f;
	}
	jarak = e + f;
	cout << jarak;
}

// https://tlx.toki.id/courses/basic/chapters/05/problems/G/submissions/1588164

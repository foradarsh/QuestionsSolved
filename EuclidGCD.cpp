#include <iostream>
using namespace std;

int gcd(int a, int b){

    while(b!=0){
        int r1= a%b;
        a=b;
        b=r1;
    }
    return a;
}
int main() {
	// your code goes here
    int a,b;
    cin >> a >> b;

    cout << gcd(a,b) << endl;
	return 0;
}

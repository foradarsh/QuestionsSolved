#include <bits/stdc++.h>
using namespace std;
//funciton overloading 
    class ApnaCollege{
        public:
            void fun(){
                cout << "I am a func with no arguments" << endl; 
            }
            void fun(int x){
                cout << "I am a func with int argument" << endl;
            }
            void func(double x){
                cout << "I am a function with double argument" << endl;
            }
    };
int32_t main() {
	// your code goes here
    
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.4);

	return 0;
}

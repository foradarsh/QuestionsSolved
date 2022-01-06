#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    cout << str << endl;
    string str1(5,'n');
    string str2 ="Adarsh";

    cout << str1 << str2 << str1 + str2 << endl;

    cout << str2[2];

    cout << str2.compare(str2) << endl;




}

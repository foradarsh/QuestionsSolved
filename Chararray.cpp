#include <iostream>
using namespace std;

int main(){

    char arr[100]="apple";
    int i=0;
    while(arr[i] != '\0'){

        cout << arr[i] << endl;
        i++;
    }
    //how to take input

    char array[100];
    cin >> array;

    cout << array << endl;
    cout << array[2];
    return 0;
}
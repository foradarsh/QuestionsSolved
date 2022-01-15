#include<iostream>
using namespace std;

void reverse(string& str, int i , int j){
    //base case
    if(i > j)
        return;
    swap(str[i++], str[j--]); 
    reverse(str,i,j);   
}
int main()
{
    string name = babbar;

    return 0;
}
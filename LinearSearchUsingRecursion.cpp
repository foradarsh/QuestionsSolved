#include<iostream>
using namespace std;

bool search(int arr[], int size, int k){
    //base case
    if(size == 0)
        return false;
    if(arr[0] == k){
        return true;
    }else{
        bool remainingPart = search(arr+1,size-1,k);
    }


}
int main()
{
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;
    bool ans = search(arr,size,key);
    if(ans){
        cout << "Present" << endl;
    }else{
        cout << "Not Present" << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
bool BinarySearch(int *arr ,int s, int e, int k){
    //base case
    if(s > e)
        return false;
    
    if (arr[mid] == k){
        return true;
    }
    
    int mid = s + (e - s)/2;
    
    if(arr[mid] < k){
        BinarySearch(arr , mid+1 ,e ,k);
    }else{
        BinarySearch(arr , s ,mid-1 ,k)
    }
}

int main()
{
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 10;
    
    return 0;
}
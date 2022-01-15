#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int [len1];
    int *second = new int [len2];
    int mainArrayIndex = s;
   
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    int mainArrayIndex = mid+1;
    
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }
    //merge 2 sorted array
    int index1=0;
    int index2 =0;
    mainArrayIndex=s;

    while(index < len1 && index2 < len2){
        if(first[index] < second[index2]){
            first[index1] = arr[mainArrayIndex++];
        }else{
            second[index2] = arr[mainArrayIndex++];
        }
    }
    
    while(index1 < len1){
        first[index1] = arr[mainArrayIndex++];
    }
    
    while(index2 < len2){
        second[index2] = arr[mainArrayIndex++];
    }
}

void mergeSort( int *arr, int s , int e){
    if(s >= e)
        return;
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main()
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort(arr,0,n-1);
    return 0;
}
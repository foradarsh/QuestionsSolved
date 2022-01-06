//Binary Search
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
      if(key > arr[mid]){
        start=mid+1;
    }else{
        end=mid-1;
    }
    mid=(start+end)/2;
    }
    return -1;
}
int main()
{
     int even[6]={2,4,6,8,12,18};
     int odd[5]={3,8,11,14,16};
     int index=BinarySearch(even,6,12);
     cout<<"Index of 12 is "<<index<<endl;
    return 0;
}
//First and last occurence 
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1
  while(s<=e){
      if(arr[mid]==key){
          ans=mid;
          e=mid-1;
      }else if(arr[mid] > key){
          s=mid+1;
      }else{
          e=mid-1;
      }
      mid = s+(e-s)/2;
  }
  return ans;
}
int lastOcc(int arr[],int n,int key){
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1
  while(s<=e){
      if(arr[mid]==key){
          ans=mid;
          s=mid+1;;
      }else if(arr[mid] > key){
          s=mid+1;
      }else{
          e=mid-1;
      }
      mid = s+(e-s)/2;
  }
  return ans;
}
int main()
{
    int even[5]={1,2,3,3,5};
    return 0;
}
//Pivot element 
#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>= arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[5]={8,10,7,1,3};  
    return 0;
}
//Merge 2 sorted arrays
#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m,int arr3[]) {
        int i=0,j=0;
        int k=0;
        int arr3;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k++] = arr1[i++];
              
            }else{
                arr3[k++]=arr2[j++];
               
            }
        }
        while(i<n){
            arr3[k++]=arr1[i++];
        }
        while(j<m){
            arr3[k++]=arr2[j++];
        }
    }
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};
     merge(arr1,5,arr2,3,arr3);
     print(arr3,8);
    return 0;
}
//Maximum no of occurence
#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
   char getMaxOccuringChar(string str)
    {
     int arr[26]={0};
     
     for(int i=0;i<str.length();i++){
         char ch =str[i];
         int number =0;
         number= ch - 'a';
         arr[number]++;
     }
     int maxi=-1,ans =0;;
     for(int i=0;i<26;i++){
         if(maxi<arr[i]){
             ans=i;
             maxi=arr[i];
         }
     }
    return ans +'a';
        // Your code here
    }   
}
int main()
{
    string s;
    cin>>s;

    return 0;
}
//

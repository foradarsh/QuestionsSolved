#include<iostream>
using namespace std;

int main()
{
    int num =5;
    cout << num <<endl;
    cout << "Address of num is " << &num << endl;
    int *ptr = &num;

    double d = 4.3;
    double *p2 = &d;
    cout << "Value is : " << *p2 << endl;
   
    cout << "Value is : " << *ptr << endl;
    cout<< "size of integer is " <<sizeof(num) <<endl;
    cout<< "size of ptr is " <<sizeof(ptr) <<endl;
    
    return 0;
}
//factorial using recursion 
#include<iostream>
using namespace std;
    
int factorial(int n){
    //base case
    if(n == 0)
    return 1;
    return n * factorial(n-1);
}    
int main()
{
    int n;
    cin  >> n;
    int ans = factorial(n);
    cout << ans << endl; 
        
    return 0;
 }
// reachHome
#include<iostream>
using namespace std;

void reachHome(int src ,int dest){
 
    if(src == dest){
        cout << "Reached" << endl;
        return;
    }
    reachHome(src + 1, dest); 

}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src,dest);
    return 0;
}
//Fibonacci using recursion 
int fib(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        
        int ans = fib(n-1) + fib(n-2); 
        return ans;
    }
// isSorted
#include<iostream>
using namespace std;

bool isSorted (int arr[], int size){
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr + 1 , size - 1);
        return remainingPart;
    }    
}
int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Array is sorted" << endl;

    }else{
        cout << "Not sorted" << endl;
    }
    return 0;
}
//Recursion Linear Search 
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
//Recursion Binary Search 
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
//Reverse String using recursion
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
//Check Palindrome using recursion
#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i,int j){
     if(i > j)
        return ;
    if (str[i] != str[j]){
        return false;
    }else{
        return checkPalindrome(str,i+1,j+1); 
    }

}
int main()
{
    string name = "abcde";
    cout << endl;
    bool isPalindrome = checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout << "Its a Palindrome" << endl;
    }else{
        cout << "Its not a Palindrome" << endl; 
    }
    return 0;
}
//Calculating pawer with recursion 
#include<iostream>
using namespace std;

int power(int a , int b){
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    int ans = power(a,b/2);

    if(b%2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;

    int ans = power(a,b);
    cout << "Answer is " << ans << endl;
    return 0;
}
//Bubble sort using Recursion
#include<iostream>
using namespace std;

void sortArray( int *arr, int n){

    if(size == 0 || size == 1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}
int main()
{
     int arr[5] = {2,5,1,6,9};
     sortArray(arr,5);
    return 0;
}
//Merge Sort
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
//Quick sort
#include<iostream>
using namespace std;

int partition( int arr[], int s , int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]< = pivot){
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    int i = s,j = e;

    while(i < pivot && j > pivot){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivot && j > pivot){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

    
}

void quickSort(int arr[], int s, int e){

    if(s >= e)
        return;
    int p = partition(arr,s,e);  

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);  

}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
//
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();

    cout<< "Top element is:" << s.top() <<endl;

    if(s.empty()){
        cout<< " Stack is empty"<<endl;
    }else{
        cout<< "Not empty" << endl;
    }
    return 0;
}
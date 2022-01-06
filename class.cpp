#include <iostream>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    ~student(){
        cout << "Destructor Called" << endl;

    }

    student(student &a){
        name = a.name;
    }// Copy constructor 

    student(){
        cout << "Default constructor" << endl;
    } // Default constructor

    student(string s){
        name = s;
    }// Paramterised constructor


    void setName(string str){
        name = str;
    } //Setter func

    void getName (){
        cout << name << endl;
    }

    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
         
    }
};

int main() {
	// your code goes here
    
    //student arr[3];
    
    // for(int i=0; i<1; i++){
    //     string str;
    //     cin >> name;
    //     arr[i].setName(str);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }
    // for(int i=0; i <3; i++){
    //     arr[i].printInfo();
    // }    
    student a("Adarsh");
    a.getName();
    
    student b;
    student c = a;
    
	return 0;
}

#include<iostream>
using namespace std;

int main(){
    cout << "Hello world" << endl;
    cout << "Hello world\nMy name is Paridhi Agrawal" << endl; // for next line
    cout << "Hello world " << "My name is Paridhi Agrawal" << endl; // for same line

    //******* VARIABLE AND DATATYPES *******
    int age = 25;
    cout << age << endl; 
    cout << sizeof(age) << endl; 

    char grade = 'A';
    cout << grade << endl;
    cout << sizeof(grade) << endl;

    float PI = 3.14;
    cout << PI << endl;
    cout << sizeof(PI) << endl;

    bool isSafe = false;
    cout << isSafe << endl;    // true -> 1 & false -> 0
    cout << sizeof(isSafe) << endl;

    double price = 100.99;
    cout << price << endl;
    cout << sizeof(price) << endl;
    
    return 0;
}
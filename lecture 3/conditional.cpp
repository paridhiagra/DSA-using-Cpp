#include<iostream>
using namespace std;

int main(){

    // *******CONDITIONAL STATEMENTS*******
    // 1.if-else statement

// Example: Check if a number is positive or negative
    // int n = -45;

    // if(n >= 0){
    //     cout << "n is a positive number" <<endl;
    // }else{
    //     cout << "n is a negative number" <<endl;
    // }

// Example: Check if a person is eligible to vote or not
    int age;
    cout << "Enter your age so we can check if you are eligible to vote or not: ";
    cin >> age;

    if(age >= 18){
        cout <<"You are eligible to vote" <<endl;
    }else{
        cout << "You are not eligible to vote"<<endl;
    }

// Example: to find the number is even or odd
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd"<< endl;
    }

   // 2. if-else if-else

// Example: grading sysyem
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 90){
        cout << "Your grade is A." << endl;
    }else if(marks >= 80 && marks < 90){
        cout << "Your grade is B." << endl;
    }else{
        cout << "Your grade is C." <<endl;
    }

// Find character is lowercase or uppercase
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if(ch >='a' && ch <='z'){
        cout << "Character is lowercase." << endl;
    }else{
        cout << "Character is uppercase." << endl;
    }
// or in the form of ASCII values
    if(ch >=65 && ch <= 90){
        cout << "CHaracter is uppercase." <<endl;
    }else{
        cout << "Character is lowercase." << endl;
    }

// Ternary statement
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    cout << ((x >= 0) ? "Positive number" : "Negative number") << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    // ******* OPERATORS *******

    // 1. Arithmetic Operators: +, -, *, /, % 
    int a = 145, b = 20;

    cout << "Sum: " << (a+b) << endl;
    cout << "Difference: " << (a-b) << endl;
    cout << "Multiply: " << (a*b) << endl;
    cout << "Division: " << (a/b) << endl;
    cout << "Modulus: " << (a%b) << endl;

    int x = 5;
    // double y = 2; // using double to get decimal values
    float y = 2; // using float to get decimal values
    cout << (x/y) << endl;
    cout << (5/double(2)) << endl;

    // 2.Relational Operators: ==, !=, >, <, >=, <=
    cout << (3 < 5) << endl;   // true -> 1
    cout << (3 > 5) << endl;   // false -> 0
    cout << (3 >= 5) << endl;  // 0
    cout << (3 <= 5) << endl;  // 1
    cout << (3 == 5) << endl;  // 0
    cout << (3 != 5) << endl;  // 1

    // 3.Logical Operators: &&, ||, !
    cout << ((3 < 5) && (3 != 5)) << endl;  // 1
    cout << ((3 < 5) || (3 == 5)) << endl;  // 1
    cout << !(3 < 5) << endl;               // 0

    // Sum of 2 numbers
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int res = num1 + num2;
    cout << "Sum is: " << res << endl;
    // cout << "Sum is: " << (num1 + num2) << endl; 

    //4.Unary Operators: ++, --
    int i = 5;
    int j = i++; // post-increment
    cout << "j = " << j << endl; //5
    cout << "i = " << i << endl; //6

    int k = 5;
    int l = ++k; // pre-increment
    cout << "l = " << l << endl; //6
    cout << "k = " << k << endl; //6

    int m = 5;
    int n = m--; // post-decrement
    cout << "n = " << n << endl; //5
    cout << "m = " << m << endl; //4

    int o = 5;
    int p = --m; // pre-increment
    cout << "p = " << p << endl; //3
    cout << "o = " << o << endl; //5

    return 0;
}

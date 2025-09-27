#include <iostream>
using namespace std;

// function definition
// void printHello(){
//     cout << "Hello\n";
// }
int printHello(){
    cout << "Hello\n";
    return 3;
}

int fun(){
    int x = 25;
    cout << "x = " << x << endl;
    return 0; // returning control
}

// pass by value
int sum(int a, int b){
    a = a + 10;  // 15
    b = b + 10;  // 14
    return (a + b);  // 29
}

void changeX(int x){
    x = 2*x;
    cout << "x = " << x << endl;
}

int main(){
  // FUNCTIONS

  // function call/invoke
  printHello();
  int val = printHello();
  cout << "Val = " << val << endl; // or both statement does the same work
  cout << printHello() << endl;

  fun();
  // cout << x << endl;

  int a = 5,b = 4;
  cout << sum(a,b) << endl;

  cout << a << endl; // 5
  cout << b << endl; // 4

  int x = 5;
  changeX(x);

  cout << "x = " << x << endl;
  
  return 0;  
}

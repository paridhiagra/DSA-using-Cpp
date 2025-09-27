#include<iostream>
using namespace std;

// sum of two numbers
int sum(int a, int b){  // parameter
    int s = a + b;
    return s;
}
// min of 2 numbers
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
  cout << "Sum = " << sum(10,20) << endl;  // 30  // argument also called literal values means values that are passed to the function and does not change
  cout << "Min = " << min(45,25) << endl;  // 25
}

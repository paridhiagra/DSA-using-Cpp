#include<iostream>
using namespace std;

int main(){

    // Floyd's Triangle (n = 4)
/*
    1 
    2 3
    4 5 6
    7 8 9 10
*/
    int i,j,n = 4;
    int num = 1;

    for(i = 0;i < n;i++){
        for(j = 0;j < i+1;j++){  //for(j = i+1; j > 0; j--)[Backwrd loop]
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

/*
    A
    B C 
    D E F
    G H I J
*/
    char ch = 'A';
    
    for(i = 0;i < n;i++){
        for(j = 0;j < i + 1;j++){
            cout << ch << " "; 
            ch++;
        }
        cout << endl;
    }
    
  return 0;
}

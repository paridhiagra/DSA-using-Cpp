#include<iostream>
using namespace std;

int main(){

    // Inverted Triangle Patterns (n = 4)

/*
1111 
 222
  33
   4
*/

    int i,j,n = 4;

    for(i = 0;i < n;i++){
        for(j = 0;j < i;j++){   //spaces
            cout <<" ";
        }
        for(j = 0;j < n - i;j++){  //numbers
            cout << i+1;
        }
        cout << endl;
    }
    cout << endl;

/* 
AAAA
 BBB
  CC
   D
*/
    char ch = 'A';

    for(i = 0;i < n;i++){
        for(j = 0;j < i;j++){
            cout << " ";
        }
        for(j = 0;j < n - i;j++){
            cout << ch;
        }
        ch++;
        cout << endl;
    }
  return 0;
}

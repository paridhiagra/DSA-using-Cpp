#include<iostream>
using namespace std;

int main(){

    // Pyramid Pattern

/*
   1
  121
 12321
1234321
*/
    int i,j,n = 4;

    for(i = 0;i < n;i++){
        // spaces : n-i-1
        for(j = 0;j < (n-i-1);j++){
            cout << " ";
        }
        //num1 : i+1
        for(j = 1;j <= i+1;j++){
            cout << j; 
        }
        //num2
        for(j = i;j >= 1;j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

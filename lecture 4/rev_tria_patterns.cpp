#include<iostream>
using namespace std;

int main(){

    // Reverse Triangle Pattern
/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
    int i,j,n = 4;

    for(i = 0;i < n;i++){
        for(j = i+1;j > 0;j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

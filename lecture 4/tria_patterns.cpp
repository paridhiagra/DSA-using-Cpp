#include<iostream>
using namespace std;

int main(){
    
    // Triangle Patterns (n = 4)
/*
    *
    * *
    * * *
    * * * *
*/
    int i,j,n = 4;

    for(i = 0;i < n;i++){
        for(j = 0;j < i + 1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

/*
    1
    2 2 
    3 3 3
    4 4 4 4
*/
    for(i = 0;i < n;i++){
        for(j = 0;j < i + 1;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
    A
    B B 
    C C C
    D D D D
*/
    
    char ch = 'A';
    for(i = 0;i < n;i++){
        for(j = 0;j < i + 1;j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    cout << endl;

/*
    1 
    1 2 
    1 2 3
    1 2 3 4
*/
    for(i = 0;i < n;i++){
        for(j = 0;j < i + 1;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}

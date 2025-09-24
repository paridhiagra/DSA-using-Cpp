#include<iostream>
using namespace std;

int main(){

// Square Patterns (n = 4)
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
    int i, j, n=4;

    for(i = 1;i <= n;i++){      // outer
        for(j = 1;j <= n;j++){  // inner
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
    0 1 2 3
    0 1 2 3
    0 1 2 3
    0 1 2 3
*/
    for(i = 0;i < n-1;i++){
        for(j = 0;j < n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
    * * * *
    * * * *
    * * * *
    * * * *
*/
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

/*
    A B C D
    A B C D
    A B C D
    A B C D
*/
    for(i = 0;i < n;i++){
        char ch = 'A';
        for(j = 0;j < n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    // n = 3
    int n1 = 3;
    int num = 1;
    char ch1 = 'A';
/*
    1 2 3
    4 5 6
    7 8 9
*/
    for(i = 0;i < n1;i++){
        for(j = 0;j < n1;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;
/*
    A B C
    D E F
    G H I
*/
    for(i = 0;i < n1;i++){
        for(j = 0;j < n1;j++){
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

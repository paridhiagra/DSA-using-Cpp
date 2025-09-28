#include<iostream>
using namespace std;

int main(){

    // ARRAY
    
    int marks[5] = {99,100,23,56,89};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[5] << endl; // garbage value

    cout << sizeof(marks)/sizeof(int) << endl;  // 20 bytes(memory occupied by the array) 
    cout << sizeof(marks) << endl;  // 5 (size of array)
    
    //to print the marks we will also use loops: 0 to size-1 means 0 to 4
    for(int i = 0; i<=4; i++){
        cout << marks[i] << endl;
    }

    // taking input from the user 

    int size = 5;
    int mark[size], j;

    for(j = 0; j<size; j++){
        cin >> mark[j];
    }
    for(j = 0; j<size; j++){
        cout << mark[j] << endl;
    }
    return 0;
}

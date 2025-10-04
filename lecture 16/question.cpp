#include<iostream>
using namespace std;

int main(){
    // Question-1
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl; // 5
    cout << **q << endl; // 5
    cout << p << endl; // 0x61ff0c
    cout << *q << endl; // 0x61ff0c

    // Question-2
    int arr[] = {10,20,30,40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl; // 20
    cout << *(ptr + 3) << endl; // 40
    ptr++;
    cout << *ptr << endl;  // 20

    return 0;
}

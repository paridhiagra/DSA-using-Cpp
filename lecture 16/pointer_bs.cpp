#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;  

    // creating pointer
    int b = 15;
    int *ptr1 = &b;
    cout << ptr1 << endl;   // 0x61fef8
    cout << &b << endl;     // 0x61fef8 (same as ptr1 means same address)
    cout << *ptr1 << endl;   // 15

    float price = 100.99;
    float *ptr2 = &price;
    cout << ptr2 << endl;   // 0x61fefc
    cout << &price << endl; // 0x61fefc
    cout << *ptr2 << endl;  // 100.99

    // pointer to pointer variable
    int x = 10;
    int *ptr3 = &x;

    int **parPtr = &ptr3;
    cout << &ptr3 << endl;  // 0x61fef0
    cout << parPtr << endl; // 0x61fef0

    // dereference pointer
    int y = 1021;
    int *ptr4 = &y;
    int **parPtr1 = &ptr4;
    cout << *(&y) << endl; // 1021
    cout << *(ptr4) << endl; // 1021
    cout << *(ptr4) << endl; // 1021
    cout << *(parPtr1) << endl; // 0x61ff0c
    cout << ptr4 << endl; // 0x61ff0c
    cout << **(parPtr1) << endl;  //1021

    // NULL POINTER
    int *ptr5 = NULL; 
    cout << ptr5 << endl; // any garbage value and for NULL -> 0
    
    return 0;
}

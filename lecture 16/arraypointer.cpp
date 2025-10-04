#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;  // any address
    cout << *arr << endl; // 1

    // int a = 15;
    // arr = &a;   constant pointer(cannot be changed throughout the program)

    // Pointer arithmetic
    int a = 10;
    int *ptr = &a;
    
    // 1. Increment / Decrement
    cout << ptr << endl;   // O/P :- 0x61fef4
    ptr++;
    cout << ptr << endl;  // changes will occur in hexadecimal form -> +4 bytes     O/P :- 0x61fef8
    ptr--;
    cout << ptr << endl;  // 0x61fef4

    // 2. Add / Sub
    cout << ptr + 2 << endl;  // 0x61fefc
    cout << ptr - 3 << endl;  // 0x61fee8

    // using these operations in previous array
    cout << *(arr) << endl;     // 1
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4 
    cout << *(arr + 4) << endl; // 5

    // 3. Subtract ptr (we can't add ptr but we can subtract if they are of same type)
    int *ptr2; // 100
    int *ptr1 = ptr2 + 3;  // 112

    cout << ptr1 - ptr2 << endl;  // 3

    // 4. Compare
    int *ptr3;
    int *ptr4;
    // int *ptr4 = ptr3;

    cout << ptr3 << endl;
    cout << ptr4 << endl;

    cout << (ptr3 < ptr4) << endl;
    cout << (ptr3 <= ptr4) << endl;
    cout << (ptr3 > ptr4) << endl;
    cout << (ptr3 >= ptr4) << endl;
    cout << (ptr3 == ptr4) << endl;
    cout << (ptr3 != ptr4) << endl;

    return 0;
}

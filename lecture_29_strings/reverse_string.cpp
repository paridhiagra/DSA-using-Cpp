#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    // reverse a string
    // 1. for char arr[]
    char str[] = "hello";
    int n = 5;
    int start = 0, end = n - 1;

    while(start < end){
        swap(str[start], str[end]);
        start ++;
        end --;
    }
    cout << str << endl;  // olleh

    // 2. for string
    string str1 = "apna college";

    reverse(str1.begin(), str1.end());  // iterators
    cout << str1 << endl;   // egelloc anpa

    return 0;
}
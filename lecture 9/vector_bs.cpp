#include<iostream>
#include<vector>
using namespace std;

int main(){

    // # VECTOR SYNTAX

    // vector<int> vec; //0
    // cout << vec[0] << endl; // segmentation fault
    
    vector<int> num = {1,2,3};
    cout << num[1] << endl; // 2

    vector<int> number(3,0);
    cout << number[0] << endl; // 0
    cout << number[1] << endl; // 0
    cout << number[2] << endl; // 0

    // using for loop in vector 
    vector<char> alpha = {'a','b','c','d','e'};
    for(char val: alpha){
        cout << val << " ";  // a b c d e 
    }
    cout << endl;

    // checking the size and capacity of a vector 
    vector<int> v1;

    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    cout<< "Size = " << v1.size() << endl; // 5
    cout << "Capacity = " << v1.capacity() << endl; // 8
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // 1. Vectors
    vector<int> vec1;
    // a. size
    // cout << "Size when vector is empty: " << vec1.size() << endl;  // 0

    // b. push_back -> Functions to add data 
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    // c. emplace_back
    vec1.emplace_back(6);

    // d. pop_back -> deletes the last element
    vec1.pop_back();

    for(int val1 : vec1){
        cout << val1 << " ";
    }
    cout << endl;
    cout << "Size: " << vec1.size() << endl;  // 5
    
    // e. capacity
    cout << "Capacity: " << vec1.capacity() << endl;  // 8
    
    // f. at() or []
    cout << "Value at index 2: " << vec1.at(2) << endl;  // 3
    cout << "Value at index 2: " << vec1[2] << endl;  // 3
    
    // g. front and back
    cout << "Front element: " << vec1.front() << endl;  // 1
    cout << "Back element: " << vec1.back() << endl;  // 5

    // h. erase

    vec1.erase(vec1.begin()); // 2 3 4 5 
    vec1.erase(vec1.begin() + 2); // 1 2 4 5 
    vec1.erase(vec1.begin() + 1, vec1.begin() + 3);  // 1 4 5 

    for(int val1 : vec1){
        cout << val1 << " ";
    }
    cout << endl;

    // i. insert
    vec1.insert(vec1.begin() + 2, 100);  // 1 2 100 3 4 5 

    for(int val1 : vec1){
        cout << val1 << " ";
    }
    cout << endl;

    // j. clear
    vec1.clear();

    for(int val1 : vec1){
        cout << val1 << " ";
    }
    cout << endl;

    cout << "Size after clearing all elements: " << vec1.size() << endl;  // 0
    cout << "Capacity after clearing all elements: " << vec1.capacity() << endl;  // 8

    // k. empty
    for(int val1 : vec1){
        cout << val1 << " ";
    }
    cout << endl;

    cout << "Is empty: " << vec1.empty() << endl;  // 1 -> True

    // initialising vector with different methods
    vector<int> vec2 = {1,2,3,4,5};
    for(int val2 : vec2){
        cout << val2 << " ";
    }
    cout << endl;

    vector<int> vec3(3,5);  // 3-> size 5-> element we want to print 
    for(int val3 : vec3){
        cout << val3 << " ";  // 5 5 5
    }
    cout << endl;

    vector<int> vec4(vec2);   
    for(int val4 : vec4){
        cout << val4 << " ";
    }
    cout << endl;


    return 0;
}
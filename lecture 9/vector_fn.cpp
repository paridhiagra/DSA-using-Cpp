#include<iostream>
#include<vector>
using namespace std;

int main(){
    // size
    vector<char> v1 = {'a','b','c','d','e'};
    cout << "Size  = " << v1.size() << endl;

    // push_back
    vector<int> v2;
    cout << "Size = " << v2.size() << endl;
    v2.push_back(28);
    v2.push_back(68);
    v2.push_back(45);
    cout << "Size after pushing an element = " << v2.size() << endl;

    for(int val : v2){  // for each loop
        cout << val << " "; // 28 68 45  
    }
    cout << endl;

    // pop_back
    vector<int> v3 = {1,2,5,4,3};
    v3.pop_back(); // last index value will pop
    for(int val : v3){
        cout << val << " "; // 1 2 5 4
    }
    cout << endl;

    // front
    cout << "Front value = " << v3.front() << endl; // 1
    // last
    cout << "Last value = " << v3.back() << endl; // 1
    // at
    cout << v3.at(2) << endl; // 5
    // capacity
    cout << "Capacity = " << v3.capacity() << endl; // 5

    return 0;
}

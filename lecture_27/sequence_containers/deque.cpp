#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d = {1,2,3,4};
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;

    cout << d[2] << endl;  // 3 -> it is possible because we implements it with the help of dynamic array that's why random access is possible

    return 0;
}
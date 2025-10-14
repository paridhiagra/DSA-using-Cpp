#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q1;
    queue<int> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    cout << "Front = " << q1.front() << endl; // 1 => becuase it follows FIFO(First In First Out) property.

    // while(!q1.empty()){
    //     cout << q1.front() << " ";  // 1 2 3 4
    //     q1.pop();
    // }
    // cout << endl;

    q2.swap(q1);

    cout << "q1.size = " << q1.size() << endl;  // 0
    cout << "q2.size = " << q2.size() << endl;  // 4
    
    return 0;
}
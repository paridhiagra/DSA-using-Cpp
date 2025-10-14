#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q1;
    priority_queue<int> q2;

    q1.push(5);
    q1.push(3);
    q1.push(9);
    q1.push(4);

    cout << "Top = " << q1.top() << endl; // 9

    // while(!q1.empty()){
    //     cout << q1.top() << " ";  // 9 5 4 3
    //     q1.pop();
    // }
    // cout << endl;

    q2.swap(q1);

    cout << "q1.size = " << q1.size() << endl;  // 0
    cout << "q2.size = " << q2.size() << endl;  // 4

    priority_queue<int, vector<int>, greater<int>> q3;

    q3.push(5);
    q3.push(3);
    q3.push(9);
    q3.push(4);

    while(!q3.empty()){
      cout << q3.top() << " ";  // 3 4 5 9
        q3.pop();  
    }
    cout << endl;

    return 0;
}
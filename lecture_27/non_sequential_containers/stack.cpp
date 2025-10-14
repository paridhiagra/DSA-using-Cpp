#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s1;
    stack<int> s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << "Top = " << s1.top() << endl; // 4 => becuase it followes LIFO(Last In First Out) property.

    // while(!s1.empty()){
    //     cout << s1.top() << " ";  // 4 3 2 1
    //     s1.pop();
    // }
    // cout << endl;

    s2.swap(s1);

    cout << "s1.size = " << s1.size() << endl;  // 0
    cout << "s2.size = " << s2.size() << endl;  // 4
    return 0;
}
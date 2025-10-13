#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.push_back(5);

    for(int val1 : l){
        cout << val1 << " ";  // 4 3 1 2 5
    }
    cout << endl;

    cout << l[1] << endl;  // random access is not possible because it is a doubly linked list.

    l.pop_back();

    for(int val1 : l){
        cout << val1 << " "; // 4 3 1 2
    }
    cout << endl;

    l.pop_front();

    for(int val1 : l){
        cout << val1 << " "; // 3 1 2
    }
    cout << endl;

    cout << "Size: " << l.size() << endl;
// and many more functions like emplace_back and emplace_front, erase, clear, etc(same as vetors).
    return 0;
}
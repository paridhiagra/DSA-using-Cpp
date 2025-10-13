#include<iostream>
using namespace std;

int main(){
    pair<int, char> p = {1, 'b'};

    cout << p.first << endl;  // 1
    cout << p.second << endl; // b

    pair<int, pair<int, char>> p1 = {1, {2, 'a'}};

    cout << p1.first << endl; // 1
    cout << p1.second.first << endl;  // 2
    cout << p1.second.second << endl;  // a

    return 0;
}
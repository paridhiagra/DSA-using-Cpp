#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int, char> p = {1, 'b'};

    cout << p.first << endl;  // 1
    cout << p.second << endl; // b

    pair<int, pair<int, char>> p1 = {1, {2, 'a'}};

    cout << p1.first << endl; // 1
    cout << p1.second.first << endl;  // 2
    cout << p1.second.second << endl;  // a

    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};
    vec.emplace_back(4,5); // create in-place objects 
    vec.push_back({5,6}); // inserts 

    for(pair<int, int> val : vec){
    // for(auto val : vec){
        cout << val.first << " " << val.second << endl;;
    }

    return 0;
}

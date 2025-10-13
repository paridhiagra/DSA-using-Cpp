#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Vectors Iterators
    vector<int> vec = {1,2,3,4,5};

    // i. begin()
    cout << "vec.begin: " << *(vec.begin()) << endl;      // 1
    cout << "vec.begin: " << *(vec.begin() + 1) << endl;  // 2
    // ii. end()
    cout << "vec.end: " << *(vec.end()) << endl;   // garbage value

    // creating iterator 
    // forward
    // it is already a iterator that's why we are dereferencing it!
    vector<int>:: iterator it;
    for(it = vec.begin(); it!=vec.end(); it++){
        cout << *(it) << " ";  // 1 2 3 4 5
    }
    cout << endl;

    // backward
    // vector<int>:: reverse_iterator ite;
    // for(vector<int>:: reverse_iterator ite = vec.rbegin(); ite!=vec.rend(); ite++){ // to ignore that long part we use "auto".
    for(auto ite = vec.rbegin(); ite!=vec.rend(); ite++){
        cout << *(ite) << " ";  // 5 4 3 2 1
    }
    cout << endl;

    return 0;

}
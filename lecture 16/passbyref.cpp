#include<iostream>
using namespace std;

void changeA(int *ptr){  // pass by reference using pointer
    *ptr = 20;
}

void changea(int &b){  // pass by reference using alias
    b = 30;
}

int main(){
    int a = 10;
    changeA(&a);
    cout << "Inside main fnc: " << a << endl; // 20
    changea(a);
    cout << "Inside main fnc: " << a << endl; // 30
    return 0;
}




/* 
pass by value
void changeA(int a){
    a = 20;
}
 ----MAIN----
int a = 10;
changeA(&a);
cout << "Inside main fnc: " << a << endl; // 10

*/

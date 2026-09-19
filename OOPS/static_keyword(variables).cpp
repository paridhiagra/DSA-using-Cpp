#include<iostream>
#include<string>
using namespace std;

// void fun(){
//     static int x = 0;
//     cout << "x: " << x << endl;
//     x++;
// }

class A{
    public: 
        int x;

        void incX(){
            x = x + 1;
        }
};

int main(){
//     fun();   //0    //0
//     fun();   //0    //1
//     fun();   //0    //2
//     fun();   //0    //3
//     fun();   //0    //4

        A obj1;
        A obj2;

        obj1.x = 100;
        obj2.x = 200;

        cout << "x: " << obj1.x << endl; //100
        cout << "x: " << obj2.x << endl; //200

        // cout << "x: " << obj1.x << endl;
        // obj1.incX();
        // cout << "x: " << obj1.x << endl;


    
    
    return 0;
}
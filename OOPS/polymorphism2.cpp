#include<iostream>
#include<string>
using namespace std;

//++++++++++++++++++++++++++++++++ RUn Time Polymorphism ++++++++++++++++++++++++++++++++++++

//-------------------- Function Overriding---------------------
class Parent{
    public:
        void getInfo(){
            cout << "Parent Class\n";
        }

        // Virtual function
        virtual void hello(){
            cout << "Hello from parent\n";
        }
};

class Child : public Parent{
    public: 
        void getInfo(){
            cout << "Child class\n";
        }

        void hello(){
            cout << "Hello from child\n";
        }
};



int main(){
//-------------------- Function Overriding---------------------

    Child c1;
    c1.hello();   // Hello from child
    c1.getInfo();   // Child class

    // Parent p1;
    // p1.getInfo();      // Parent class


    return 0;
}
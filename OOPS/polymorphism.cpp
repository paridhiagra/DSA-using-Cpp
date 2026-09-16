#include<iostream>
#include<string>
using namespace std;

// constructor overloading

// class Student{
//     public: 
//         string name;

//         Student(){
//             cout << "Non-parameterized\n";
//         }

//         Student(string name){
//             this -> name = name;
//             cout << "Parameterized\n";
//         }
// };

// function overloading

class Print{
    public:
        void show(int x){
            cout << "int: " << x << endl;
        }

        void show(char ch){
            cout << "char: " << ch << endl;
        }
};


int main(){

    // constructor overloading

    // Student s1;
    // Student s2("Alice");

    // function overloading

    Print p1;
    // p1.show(101);
    p1.show('P');


    return 0;
}
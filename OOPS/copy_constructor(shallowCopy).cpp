#include<iostream>
#include<string>
using namespace std; 

class Student{
public:
    string name;  // created in stack(statically allocated memory)
    // double cgpa;  // created in stack(statically allocated memory)
    double *cgpaPtr;

    Student(string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){ 
        this -> name = obj.name;
        // this -> cgpa = obj.cgpa;
        this -> cgpaPtr = obj.cgpaPtr;   // shallow copy; both objects will point to the same memory location of cgpaPtr. If we change the value of cgpaPtr in one object, it will reflect in the other object as well.
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

};


int main(){
    Student s1("Paridhi", 8.3);
    Student s2(s1);   // will change the name in future.
    
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    // s2.name = "Neha";
    s1.getInfo();

    return 0;
} 
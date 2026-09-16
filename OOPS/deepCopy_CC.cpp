#include<iostream>
#include<string>
using namespace std; 

class Student{
public:
    string name;  // created in stack(statically allocated memory)
    double *cgpaPtr;

    Student(string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    
    // custom copy constructor
    
    Student(Student &obj){ 
        this -> name = obj.name;
        cgpaPtr = new double; // dynamic memory allocation for deep copy
        *cgpaPtr = *obj.cgpaPtr;   // deep copy; both objects will point to different memory locations of cgpaPtr. If we change the value of cgpaPtr in one object, it will not reflect in the other object as well. 
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

};


int main(){
    Student s1("Paridhi", 8.3);
    Student s2(s1);
    
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "Neha";
    s2.getInfo();

    return 0;
} 
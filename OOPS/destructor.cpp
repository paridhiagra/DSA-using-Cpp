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


    // destructor
    ~Student(){
        cout << "Hi, I delete the dynamically allocated memory of cgpaPtr\n";
        delete cgpaPtr;  // free the dynamically allocated memory
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

};


int main(){
    Student s1("Paridhi", 8.3);
    s1.getInfo();

    return 0;
} 
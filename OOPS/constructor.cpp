#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    Teacher(){   // constructor;  // non-parameterized constructor
        cout << "Hey! I am constructor\n"; 
        dept = "Electronics and Communication";
    }
    
    // parameterized constructor
    // Teacher(string n, string d, string s, double sal){
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }

    // using @this pointer 
    Teacher(string name, string dept, string subject, double salary){
        this -> name = name;
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }

    // custom copy constructor
    Teacher(Teacher &orgObj){   // pass by reference(it is the original object, not a copy of it)
        cout << "Hey! I am custom copy constructor...\n";
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    } 

    // propertries / attributes
    string name;
    string dept;
    string subject;

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};


int main(){
    Teacher t1("Paridhi", "Electronics and Communication", "Digital Electronics", 50000);
    // t1.getInfo();  // automatically constructor is called

    // copy constructor
    Teacher t2(t1);  // default copy constructor is called
    t2.getInfo();
  
    // t1.name = "Paridhi";
    // t1.dept = "Electronics and Communication";
    // t1.subject = "Digital Electronics";

    // cout << "Name: " << t1.name << endl;
    // cout << "Department: " << t1.dept << endl;

    return 0;
}
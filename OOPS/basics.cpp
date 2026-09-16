#include<iostream>
#include<string>
using namespace std;

// Encapsulation is the process of binding data members and member functions together in a single unit called class. It is also known as data hiding. In encapsulation, the data members of a class are hidden from other classes and can be accessed only through the member functions of their own class.

class Teacher{
private:
    double salary;

public:
    Teacher(){   // constructor;
        cout << "Hey! I am constructor\n"; 
        dept = "Electronics and Communication";
    } 

    // propertries / attributes
    string name;
    string dept;
    string subject;

    // method / member functions
    void changDept(string newDept){
        dept = newDept;
    }

    // for accessing private data members we use getter and setter methods
    // setter
    void setSalary(double s){
        salary = s;
    }

    // getter
    double getSalary(){
        return salary;
    }
};

class Account{
private:
    double balance;
    string password; // data hiding 

public:
    string accountId;
    string username;
    
};

int main(){
    Teacher t1;  // automatically constructor is called
    Teacher t2;
  
    t1.name = "Paridhi";
    // t1.dept = "Electronics and Communication";
    t1.subject = "Digital Electronics";
    t1.setSalary(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: " << t1.getSalary() << endl;  // we cannot access salary because it is private
    // cout << "Salary: " << t1.Salary() << endl;  // we cannot access salary because it is private

    return 0;
}
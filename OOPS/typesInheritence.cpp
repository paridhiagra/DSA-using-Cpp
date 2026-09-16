#include<iostream>
#include<string>
using namespace std;

// -----------Multi-level Inheritence------------

// class Person{
//     public: 
//         string name;
//         int age;
// };

// class Student: public Person{
//     public:
//         int rollNo;
// };

// class GradStudent : public Student{
//     public:
//         string researchArea;
// };

// -----------Multiple Inheritence------------

// class Student{
//     public:
//         string name;
//         int rollNo;
// };

// class Teacher{
//     public:
//         string subject;
//         double salary;
// };

// class TA : public Student, public Teacher{

// };

// ---------Hierarchical Inheritence-----------
class Person{
    string name;
    int age;
};

class Student : public Person{
    int rollNo;
};

class Teacher : public Person{
    string subject;
};


int main(){

    // -----------Multi-level Inheritence------------

    // GradStudent g1;
    // g1.name = "Tony Stark";
    // g1.researchArea = "Quantum Physics";

    // cout << "Name: " << g1.name << endl;
    // cout << "Research Area: " << g1.researchArea << endl;

// -----------Multiple Inheritence------------
    // TA t1;
    // t1.name = "Tony stark";
    // t1.subject = "Engineering";

    // cout << "Name: " << t1.name << endl;
    // cout << "Subject: " << t1.subject << endl;

// ---------Hierarchical Inheritence----------


    return 0;
}
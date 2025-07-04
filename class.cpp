#include <bits/stdc++.h>
using namespace std;

// It's the blueprint of a object. It doesn't allocate any memory size.
class Student{
    // Properties/members of class Student
    public:
    int regNo;
    string stuName;
    
    Student() { // Default constructor
        cout << "Default Constructor" << endl;
    }
    
    Student(int n, string s) { // Parameterised constructor
        cout << "Parameterised Constructor" << endl;
        regNo = n;
        stuName = s;
        // cout << "Reg no: "<< regNo << " Student name: " << stuName << endl;
    }
    
    Student(int a, string b, int grade) {
        cout << "Overloaded parameterised Constructor" << endl;
        regNo = a;
        stuName = b;
        grade = 10;
        cout << "Grade: " << grade << endl;
    }
    
    void setName(string name) {
        stuName = name;
    }
    
    void display() { // Member Functions
        cout << "Student name: " << stuName<< endl;
        cout << "Registration no: " << regNo << endl;
    }
    
};

int main()
{
    // At the time of object creation memory is allocated.
    Student s; // 's' is an object of class Student
    
    s.setName("Sushil");
    s.regNo = 12222221;
    s.display();
    
    Student s1;
    s1.setName("Rahul");
    s1.regNo = 12219517;
    s1.display();
    
    Student *s2 = new Student;
    (*s2).setName("Mayank");
    s2 -> regNo = 1222432;
    s2 -> display();
    
    Student s3( 12222211, "Aarav");
    s3.display();
    
    Student s4(1224321, "Abhishek", 89);
    s4.display();
    
    return 0;
}

// By default data members of a class are private.
// Types of constructor: Default, Parameterised, Copy, Destructor
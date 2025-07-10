#include <iostream>
using namespace std;

// Destructor - It is used to delete the object and free memory space. Last function that is invoked beofre the object is destroyed

class Student{
    public:
    int *age;
    
    Student(int a) {
        age = new int;
        *age = a;
        cout << "Constructor called" << endl;
    }
    
    ~Student() {
        delete age;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s(21);
    
    return 0;
}
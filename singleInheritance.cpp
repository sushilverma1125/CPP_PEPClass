#include <iostream>
using namespace std;

// Single level inheritance - 1 parent and 1 child
class Person{
    protected:
    string name;
    int age;
    
    public:
    void person() { // Member function
        cout << "This is class Person" << endl;
    }
};

class Teacher : public Person{
    // protected:
    // string name;
    // int age;
    
    public:
    int salary;
    
    Teacher(string name, int age, int salary) {
        this -> name = name;
        this -> age = age;
        this -> salary = salary;
    }
    
    void teacher() {
        cout << "This is class Teacher" << endl;
    }
    
    void display() {
        cout << "Name is " << name << " age is " << age << " and having salary " << salary << endl;
    }
};
 
int main()
{
    Teacher t("Ashish", 24, 50000);
    t.display();
    return 0;
}

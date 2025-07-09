#include <iostream>
using namespace std;
/*
Multilevel inheritance - single child multiple parent class

    YOUTUBER                  TEACHER
---------------              ----------       
| Subscribers |              | Salary |
---------------              ----------
            
            --------------------
            | name, age, salary |
            --------------------
*/

class Youtuber {
  protected:
  int subscriber;
  
  public:
  void youtuber() {
        cout << "I'm a youtuber" << endl;
  }
  
};

class Teacher {
  protected:
  int salary;
  
  public:
  void teacher() {
        cout << "I'm from teacher class" << endl;
  }
};

class Person : public Teacher, public Youtuber{
  public:
  string name;
  int age;
  
  Person(string name, int age, int salary, int subscriber) {
      this -> name = name;
      this -> age = age;
      this -> salary = salary;
      this -> subscriber = subscriber;
  }
  
  void display() {
      cout << "Name " << name << ", age " << age << ", salary " << salary << ", subscriber " << subscriber << endl;
  }
  
  void person() {
      cout << "I'm from Person class" << endl;
      teacher();
      youtuber();
  }
 
};


int main()
{
    Person p("Alok", 19, 10000, 890);
    p.person();
    return 0;
}

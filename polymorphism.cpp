#include <iostream>
using namespace std;

// Polymorphism - Many forms, the ability of an entity to behave different in different scenarios

int add(int a, int b) {
    return a+b;
}

int add(int a, int b, int c) {
    return a+b+c;
}

class Complex{
  public:
  int real;
  int img;
  
  Complex(int real, int img) {
      this -> real = real;
      this -> img = img;
  }
  
  Complex operator + (Complex &c) {
      Complex res;
      
      res.real = real + c.real;
      res.img = img + c.img;
      
      return res;
  }
  
  void display() {
      cout << real << "+i" << img << endl; 
  }

};

int main()
{
    // int a = 4, b = 3, c = 5;
    // cout << add(a,b) << endl << add(a, b, c);
    
    Complex c1(4, 6);
    c1.display();
    
    Complex c2(3, 2);
    c2.display();
    
    Complex c3 = c1 + c2;
    c3.display();
    
    
    return 0;
}
// Demonstration of run-time polymorphism in C++

#include<iostream>
using namespace std;

class Parent {
public:
    // Virtual function to allow overriding in the child class
    virtual void Print() {
        cout << "parent class" << endl;
    }

    // Non-virtual function, cannot be overridden
    void Show() {
        cout << "parent class" << endl;
    }
};

class Child : public Parent {
public:
    // Overriding the virtual function from the parent class
    void Print() override {
        cout << "child class" << endl;
    }

    // Hiding the non-virtual function from the parent class
    void Show() {
        cout << "child class" << endl;
    }
};

int main() {
    Parent *p; // Pointer to Parent class
    Child c;   // Object of Child class

    p = &c;    // Pointing to Child object

    p->Print(); // Calls Child's Print() due to virtual function (run-time polymorphism)
    p->Show();  // Calls Parent's Show() due to non-virtual function (compile-time binding)

    return 0;
}
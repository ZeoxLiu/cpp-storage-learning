#include <iostream>

class A {
public:
    A() {
        std::cout << "A Construct\n";
    }

    ~A() {
        std::cout << "A Destruct\n";
    }
};

class B {
public:
    B() {
        std::cout << "B Construct\n";
    }

    ~B() {
        std::cout << "B Destruct\n";
    }
};

int main() {
    A a;

    {
        B b;
    }

    std::cout << "Middle\n";
}
#include <iostream>
#include <memory>

class Buffer {
    public:
    Buffer() {
        std::cout<<"Construct\n";
    }
    ~Buffer() {
        std::cout<<"Desstruct\n";
    }
    Buffer(const Buffer& other) {
        std::cout<<"copy construct\n";
    }
    Buffer& operator=(const Buffer& other) {
        std::cout << "copy assignment\n";
        return *this;
    }
};

int main () {
    Buffer b1;

    Buffer b2 = b1;

    Buffer b3;

    b3 = b1;
}
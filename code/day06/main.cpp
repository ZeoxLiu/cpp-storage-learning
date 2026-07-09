#include <iostream>
#include<vector>

class Buffer {
private:
    std::vector<int> data;

public:
    Buffer() {
        data.push_back(100);
        std::cout << "Construct\n";
    }

    // ~Buffer() {
        
    //     std::cout << "Destruct\n";
    // }
    Buffer(const Buffer& other) {
        data=other.data;
        std::cout<<"copy Construct\n";
    }
    Buffer& operator=(const Buffer& other) {
        data=other.data;
        std::cout<<"copy assignment\n";
        return *this;
    }
};

int main () {
    Buffer b1;
    Buffer b2 = b1;

}
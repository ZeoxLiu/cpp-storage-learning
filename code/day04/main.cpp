#include <iostream>
#include <memory>


class File {
public:
    File() {
        std::cout << "Open File\n";
    }

    ~File() {
        std::cout << "Close File\n";
    }
    File(const File& other) {
        std::cout << "copy construct\n";
    }
};

 void process(File file) {
        std::cout<<"processing";
    }

int main() {
    File file1;
    process(file1);
}
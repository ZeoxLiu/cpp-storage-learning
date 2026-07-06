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

    void read() {
        std::cout << "Reading...\n";
    }
};

int main() {
    {
        
        File* file = new File;
        std::cout << "Working...\n";
        delete file;
    }

    std::cout << "Program End\n";
}
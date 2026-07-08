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
};

class Buffer {
public:
    Buffer() {
        std::cout << "Open Buffer\n";
    }

    ~Buffer() {
        std::cout << "Close Buffer\n";
    }
};

class Logger {
public:
    Logger() {
        std::cout << "Open Logger\n";
    }

    ~Logger() {
        std::cout << "Close Logger\n";
    }
};

class Database {
public:
    Database() {
        std::cout << "Open Database\n";
    }

    ~Database() {
        std::cout << "Close Database\n";
    }
    Logger lg;
    Buffer bf;
    File file;
};

int main() {
    {
    Database db;
    }
    std::cout << "End\n";
    
}
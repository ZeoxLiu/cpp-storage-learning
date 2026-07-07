#include <iostream>

class File {
public:

    File() {
        std::cout << "construct\n";
    }

    ~File() {
        std::cout << "Destruct\n";
    }
};
class WAL {

public:

    WAL()
    {
        std::cout << "Open WAL\n";
    }


    ~WAL()
    {
        std::cout << "Close WAL\n";
    }

};

int main()
{
    WAL wal;

    std::cout << "Writing data\n";
}
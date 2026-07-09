#include <iostream>
#include <vector>
#include<string>

class FileBuffer
{
private:
    std::vector<char> buffer;
    std::string filename;

public:
    // 完成：

    // 默认构造函数
    // 带参数构造函数
    // 一个 printInfo() 函数
    // 一个 write(char c) 函数（向 buffer 添加字符）
    void write(char c)
    {
        buffer.push_back(c);
    }

    void printInfo()
    {
        for (int i=0;i<buffer.size();i++) {
            std::cout << buffer[i];
        }
        std::cout<<std::endl;
    }

    FileBuffer(const FileBuffer& other)
    {
        buffer=other.buffer;
        filename=other.filename;
    }
    FileBuffer(std::string text) 
    {
        filename=text;
    }
};

int main()
{
    FileBuffer fb1("test.txt");

    fb1.write('A');
    fb1.write('B');

    FileBuffer fb2 = fb1;

    fb2.write('C');

    fb1.printInfo();

    fb2.printInfo();
}
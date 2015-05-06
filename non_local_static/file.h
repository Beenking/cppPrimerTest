#include <iostream>

class FileSystem1
{
public:
    FileSystem1(int a):num(a){}

    std::size_t numDisks() const;

private:
    int num;

};

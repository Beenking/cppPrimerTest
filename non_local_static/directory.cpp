//Directory.cpp
#include "directory.h"

extern FileSystem1 tfs;
Directory::Directory()
{
    std::size_t disks = tfs.numDisks();
    a = disks;
}
int Directory::display()
{
    return a;
}
Directory a;



#ifndef RAM_H
#define RAM_H

#include <iostream>
using namespace std;

class RAM {
private:
    int size;

public:
    RAM();
    RAM(int s);

    void print() const;
};

#endif

#ifndef SSD_H
#define SSD_H

#include <iostream>
using namespace std;

class SSD {
private:
    int capacity;

public:
    SSD();
    SSD(int c);

    void print() const;
};

#endif

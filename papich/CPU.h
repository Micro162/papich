#ifndef CPU_H
#define CPU_H

#include <iostream>
using namespace std;

class CPU {
private:
    char model[50];
    int cores;
    double frequency;

public:
    CPU();
    CPU(const char* m, int c, double f);

    void print() const;
};

#endif

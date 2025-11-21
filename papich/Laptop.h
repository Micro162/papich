#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include "CPU.h"
#include "SSD.h"
#include "VideoCard.h"
#include "RAM.h"

using namespace std;

class Laptop {
private:
    CPU cpu;
    SSD ssd;
    VideoCard gpu;
    RAM ram;

public:
    Laptop();
    Laptop(CPU c, SSD s, VideoCard g, RAM r);

    void print() const;
};

#endif

#include <iostream>
#include "Laptop.h"

using namespace std;

int main() {
    CPU cpu("Intel i7", 8, 3.5);
    SSD ssd(512);
    VideoCard gpu("RTX 3060", 6);
    RAM ram(16);

    Laptop laptop(cpu, ssd, gpu, ram);
    laptop.print();

    return 0;
}

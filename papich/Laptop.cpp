#include "Laptop.h"

Laptop::Laptop() : cpu(), ssd(), gpu(), ram() {}

Laptop::Laptop(CPU c, SSD s, VideoCard g, RAM r)
    : cpu(c), ssd(s), gpu(g), ram(r) {
}

void Laptop::print() const {
    cout << "Laptop configuration:\n";
    cpu.print();
    ssd.print();
    gpu.print();
    ram.print();
}

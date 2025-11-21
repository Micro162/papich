#include "CPU.h"

CPU::CPU() {
    model[0] = '\0';
    cores = 0;
    frequency = 0.0;
}

CPU::CPU(const char* m, int c, double f) {
    int i = 0;
    while (m[i] != '\0' && i < 49) {
        model[i] = m[i];
        i++;
    }
    model[i] = '\0';

    cores = c;
    frequency = f;
}

void CPU::print() const {
    cout << "CPU model: " << model << "\n";
    cout << "Cores: " << cores << "\n";
    cout << "Frequency: " << frequency << " GHz\n";
}

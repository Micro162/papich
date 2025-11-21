#include "RAM.h"

RAM::RAM() {
    size = 0;
}

RAM::RAM(int s) {
    size = s;
}

void RAM::print() const {
    cout << "RAM size: " << size << " GB\n";
}

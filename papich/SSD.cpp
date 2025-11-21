#include "SSD.h"

SSD::SSD() {
    capacity = 0;
}

SSD::SSD(int c) {
    capacity = c;
}

void SSD::print() const {
    cout << "SSD capacity: " << capacity << " GB\n";
}

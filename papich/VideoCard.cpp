#include "VideoCard.h"

VideoCard::VideoCard() {
    model[0] = '\0';
    memory = 0;
}

VideoCard::VideoCard(const char* m, int mem) {
    int i = 0;
    while (m[i] != '\0' && i < 49) {
        model[i] = m[i];
        i++;
    }
    model[i] = '\0';

    memory = mem;
}

void VideoCard::print() const {
    cout << "VideoCard model: " << model << "\n";
    cout << "Memory: " << memory << " GB\n";
}

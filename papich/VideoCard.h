#ifndef VIDEO_CARD_H
#define VIDEO_CARD_H

#include <iostream>
using namespace std;

class VideoCard {
private:
    char model[50];
    int memory;

public:
    VideoCard();
    VideoCard(const char* m, int mem);

    void print() const;
};

#endif

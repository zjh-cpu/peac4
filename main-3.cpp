#include <iostream>
#include "Play.h"

int main() {
    Play play;
    play.initPlay(3, 3, 10, 10); // initialize with 3 Personas, 3 Snares, and a 10x10 matrix

    play.playCycle(20, 2.0); // run 20 cycles with a snare trigger distance of 2.0

    return 0;
}

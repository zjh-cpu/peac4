#include "Spot.h"

class Persona : public Spot {
public:
    Persona(int x, int y) : Spot(x, y, 'P') {}

    void shift(int dx, int dy) {
        int newX = getLoc().first + dx;
        int newY = getLoc().second + dy;
        setLoc(newX, newY);
    }
};

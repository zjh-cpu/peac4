#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
public:
    Snare(int x, int y) : Spot(x, y, 'S'), operative(true) {}

    bool isOperative() { return operative; }
    void implement(Spot& spot) override {
        spot.setCategory('S');
        operative = false;
    }

private:
    bool operative;
};

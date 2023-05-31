#include <utility>
#include <cstdlib>
#include <cmath>

class Assists {
public:
    static std::pair<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        int x = rand() % matrixWidth;
        int y = rand() % matrixHeight;
        return std::make_pair(x, y);
    }

    static double evaluateDistance(std::pair<int, int> loc1, std::pair<int, int> loc2) {
        int dx = loc1.first - loc2.first;
        int dy = loc1.second - loc2.second;
        return std::sqrt(dx*dx + dy*dy);
    }
};


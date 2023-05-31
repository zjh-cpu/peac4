#include <utility>

class Spot {
public:
    Spot(int x, int y, char category) : location(std::make_pair(x, y)), category(category) {}

    std::pair<int, int> getLoc() { return location; }
    char getCategory() { return category; }

    void setLoc(int x, int y) { location = std::make_pair(x, y); }
    void setCategory(char category) { this->category = category; }

private:
    std::pair<int, int> location;
    char category;
};

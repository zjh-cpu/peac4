#include <iostream>
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

int main() {
    // create a spot object
    Spot spot(5, 7, 'A');
    std::cout << "Initial location: (" << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << ")\n";
    std::cout << "Initial category: " << spot.getCategory() << "\n";

    // set a new location
    spot.setLoc(3, 4);
    std::cout << "New location: (" << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << ")\n";

    // set a new category
    spot.setCategory('B');
    std::cout << "New category: " << spot.getCategory() << "\n";

    // create a random location
    std::tuple<int, int> randomLoc = Assists::createRandomLoc(10, 10);
    std::cout << "Random location: (" << std::get<0>(randomLoc) << "," << std::get<1>(randomLoc) << ")\n";

    // evaluate the distance between two locations
    double distance = Assists::evaluateDistance(spot.getLoc(), randomLoc);
    std::cout << "Distance: " << distance << "\n";

    return 0;
}

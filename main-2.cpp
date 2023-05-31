#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    // create a snare object
    Snare snare(5, 7);
    std::cout << "Snare location: (" << std::get<0>(snare.getLoc()) << "," << std::get<1>(snare.getLoc()) << ")\n";
    std::cout << "Snare category: " << snare.getCategory() << "\n";
    std::cout << "Snare operative: " << (snare.isOperative() ? "Yes" : "No") << "\n";

    // create a persona object
    Persona persona(3, 4);
    std::cout << "Persona location: (" << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << ")\n";
    std::cout << "Persona category: " << persona.getCategory() << "\n";

    // shift the persona's location
    persona.shift(2, 3);
    std::cout << "Shifted Persona location: (" << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << ")\n";

    // implement the snare on the persona
    snare.implement(persona);
    std::cout << "Persona category after snare: " << persona.getCategory() << "\n";
    std::cout << "Snare operative after implement: " << (snare.isOperative() ? "Yes" : "No") << "\n";

    return 0;
}

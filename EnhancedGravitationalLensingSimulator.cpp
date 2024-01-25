
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// Constants
const double G = 6.67430e-11; // Gravitational constant (m^3 kg^-1 s^-2)
const double c = 299792458;   // Speed of light (m/s)

// Structure to represent a celestial body or galaxy
struct CelestialBody {
    std::string name;
    double mass;    // Mass in kilograms
    double radius;  // Radius in meters
};

// Function to calculate deflection angle
double calculateDeflectionAngle(const CelestialBody& body, double distance) {
    return (4 * G * body.mass) / (c * c * distance);
}

int main() {
    // Celestial bodies data
    CelestialBody sun = {"Sun", 1.989e30, 695700000}; // Sun
    CelestialBody andromeda = {"Andromeda", 1.230e42, 1.1e21}; // Andromeda Galaxy
    CelestialBody milkyWay = {"Milky Way", 1.5e42, 9.5e20}; // Milky Way Galaxy
    CelestialBody whirlpool = {"Whirlpool", 1.6e40, 3.1e20}; // Whirlpool Galaxy
    CelestialBody sombrero = {"Sombrero", 8.0e40, 1.5e20}; // Sombrero Galaxy

    std::vector<CelestialBody> bodies = {sun, andromeda, milkyWay, whirlpool, sombrero};

    for (const auto& body : bodies) {
        double deflectionAngle = calculateDeflectionAngle(body, 2 * body.radius); // Example calculation
        std::cout << "Gravitational Lensing by " << body.name << ":" << std::endl;
        std::cout << "Deflection Angle: " << deflectionAngle << " radians" << std::endl;
    }

    return 0;
}

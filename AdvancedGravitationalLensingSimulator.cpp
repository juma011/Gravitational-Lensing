
#include <iostream>
#include <vector>
#include <cmath>

// Constants
const double G = 6.67430e-11; // Gravitational constant (m^3 kg^-1 s^-2)
const double c = 299792458;   // Speed of light (m/s)

// Structure to represent a celestial body
struct CelestialBody {
    double mass;    // Mass in kilograms
    double radius;  // Radius in meters
};

// Function to calculate deflection angle
double calculateDeflectionAngle(const CelestialBody& body, double distance) {
    return (4 * G * body.mass) / (c * c * distance);
}

int main() {
    // Example: Calculate deflection caused by the Sun on light passing at different distances
    CelestialBody sun = {1.989e30, 695700000}; // Mass and radius of the Sun

    std::vector<double> distances = {sun.radius, 1.5 * sun.radius, 2 * sun.radius, 5 * sun.radius, 10 * sun.radius};

    std::cout << "Gravitational Lensing by the Sun:" << std::endl;
    for (double distance : distances) {
        double angle = calculateDeflectionAngle(sun, distance);
        std::cout << "Distance from center: " << distance << " meters, Deflection Angle: " << angle << " radians" << std::endl;
    }

    return 0;
}

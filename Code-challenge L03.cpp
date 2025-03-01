#include <iostream>
#include <cmath>
#include <utility>

std::pair<bool, std::pair<double, double>> solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return {false, {0, 0}}; // No hay soluciones reales
    }

    double sqrtDiscriminant = std::sqrt(discriminant);
    double x1 = (-b + sqrtDiscriminant) / (2 * a);
    double x2 = (-b - sqrtDiscriminant) / (2 * a);

    return {true, {x1, x2}}; // Retorna las soluciones reales
}

int main() {
    double a, b, c;
    std::cout << "Ingrese los coeficientes a, b y c: ";
    std::cin >> a >> b >> c;

    auto result = solveQuadratic(a, b, c);

    if (result.first) {
        std::cout << "Las soluciones son: " << result.second.first << " y " << result.second.second << std::endl;
    } else {
        std::cout << "No hay soluciones reales.\n";
    }

    return 0;
}

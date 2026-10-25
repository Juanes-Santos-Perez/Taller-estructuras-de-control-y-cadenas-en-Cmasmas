#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int n; char car;
do {std::cout << "Ingrese la altura del rombo (entero impar positivo): "; std::cin >> n;
if (n <= 0) {std::cout << "Valor invalido, intente de nuevo.\n";}
else {if (n % 2 == 0) {std::cout << "Valor invalido, intente de nuevo.\n";}}}
while (n <= 0 || n % 2 == 0);
std::cout << "Ingrese el caracter: "; std::cin >> car;
int centro = n / 2; int i = 0;
while (i < n) {int distancia = i - centro; if (distancia < 0) {distancia = -distancia;}
int espacios = distancia; int simbolos = n - (2 * distancia);
int j = 0; while (j < espacios) {std::cout << " "; j = j + 1;}
int k = 0; while (k < simbolos) {std::cout << car;k = k + 1;}
std::cout << '\n';i = i + 1;} return 0;}
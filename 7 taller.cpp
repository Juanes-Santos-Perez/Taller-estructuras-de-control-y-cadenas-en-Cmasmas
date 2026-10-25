#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
char opcion;std::cout << "Cifrar (C) o descifrar (D): ";std::cin >> opcion;
int k;
std::cout << "Desplazamiento: ";std::cin >> k;std::cin.ignore();std::string mensaje;std::cout << "Mensaje: ";std::getline(std::cin, mensaje);
if (opcion == 'd' || opcion == 'D') {k = -k;}while (k < 0) {k = k + 26;}while (k >= 26) {k = k - 26;}
int i = 0;while (mensaje[i] != '\0'){char c = mensaje[i];
if (std::isupper(c)) {int pos = c - 65;pos = pos + k;while (pos < 0) {pos = pos + 26;}while (pos >= 26) {pos = pos - 26;}mensaje[i] = 65 + pos;}
else {if (std::islower(c)) {int pos = c - 97;pos = pos + k;while (pos < 0) {pos = pos + 26;}while (pos >= 26) {pos = pos - 26;}mensaje[i] = 97 + pos;}}
i = i + 1;}
std::cout << "Resultado: " << mensaje << '\n'; return 0;}
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int n;std::cout << "Ingrese N (>= 1): ";std::cin >> n;int mejor_numero = 1;int max_pasos = -1;long long max_valor_global = 1;int i = 1;
while (i <= n) {long long actual = i;int pasos = 0; long long valor_maximo = i;
while (actual > 1) {if (actual > valor_maximo) {valor_maximo = actual;}if (actual % 2 == 0) {actual = actual / 2;} else {actual = 3 * actual + 1;}pasos = pasos + 1;}
if (pasos > max_pasos) {max_pasos = pasos;mejor_numero = i;max_valor_global = valor_maximo;}i = i + 1;}
std::cout << "Numero con la secuencia mas larga: " << mejor_numero << '\n';
std::cout << "Pasos: " << max_pasos << '\n';
std::cout << "Valor maximo alcanzado: " << max_valor_global << '\n';return 0;}
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';int n;std::cout << "Numero de filas (1 a 15): ";std::cin >> n;
int i = 0;
while (i < n) {int espacios = 0;
while (espacios < n - 1 - i) {std::cout << "  ";espacios = espacios + 1;}long long val = 1;int k = 0;
while (k <= i) {std::cout << std::setw(4) << val;val = val * (i - k) / (k + 1);k = k + 1;}
std::cout << '\n';i = i + 1;}return 0;}
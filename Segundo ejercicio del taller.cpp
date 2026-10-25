#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {
int a, b;
std::cout << "Ingrese a y b (1 <= a <= b): ";
std::cin >> a >> b;
if (a < 1 || a > b) {
std::cout << "El rango no es posible, asi no me sirve ni le sirve al codigo. Mejor dejemos las cosas asi, ve matando la terminal" << '\n'; return 0;}
int perfectos = 0;
int abundantes = 0;
int deficientes = 0;
int actual = a;
while (actual <= b) {int suma_divisores = 0; int i = 1;
while (i < actual) {
if (actual % i == 0) {suma_divisores = suma_divisores + i;} i = i + 1;}
if (suma_divisores == actual) {std::cout << actual << ": perfecto (suma de divisores = " << suma_divisores << ")\n"; perfectos = perfectos + 1;}
else {if (suma_divisores > actual) {std::cout << actual << ": abundante (suma de divisores = " << suma_divisores<< ")\n"; abundantes = abundantes + 1;}
else {std::cout << actual << ": deficiente (suma de divisores = " << suma_divisores << ")\n"; deficientes = deficientes + 1;}}actual = actual + 1;}
std::cout << "Perfectos: " << perfectos << ", abundantes: " << abundantes << ", deficientes: " << deficientes << '\n'; return 0;}
//un poquito muy chandoso meterlo todo en una linea pero eso no lo notan los que estan escribiendo los numeros :)
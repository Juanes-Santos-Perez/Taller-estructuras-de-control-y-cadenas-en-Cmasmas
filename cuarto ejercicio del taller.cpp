#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
int numero; 
std::cout << "Ingrese un entero entre 1 y 3999: "; std::cin >> numero;
if (numero < 1 || numero > 3999) {std::cout << "El numero no sirve :/  (debe estar entre 1 y 3999).\n"; return 0;}
int original = numero;
std::string romano = ""; 
while (numero >= 1000) {romano = romano + "M";numero = numero - 1000;}
while (numero >= 900) {romano = romano + "CM";numero = numero - 900;}
while (numero >= 500) {romano = romano + "D";numero = numero - 500;}
while (numero >= 400) {romano = romano + "CD";numero = numero - 400;}
while (numero >= 100) {romano = romano + "C";numero = numero - 100;}
while (numero >= 90) {romano = romano + "XC";numero = numero - 90;}
while (numero >= 50) {romano = romano + "L";numero = numero - 50;}
while (numero >= 40) {romano = romano + "XL";numero = numero - 40;}
while (numero >= 10) {romano = romano + "X";numero = numero - 10;}
while (numero >= 9) {romano = romano + "IX";numero = numero - 9;}
while (numero >= 5) {romano = romano + "V";numero = numero - 5;}
while (numero >= 4) {romano = romano + "IV";numero = numero - 4;}
while (numero >= 1) {romano = romano + "I";numero = numero - 1;}
std::cout << original << " = " << romano << '\n'; return 0;}

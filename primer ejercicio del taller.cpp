#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
//un codigo que la verdad no es muy original pero aja no nos piden demasiado
int main() { {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n'; }
std::string frase;
int vocales = 0, consonantes = 0, digitos = 0, espacios = 0, otros = 0;
std::cout << "Ingrese una frase: ";
std::getline(std::cin, frase);
//porque tiene la habilidad de cachar espacios
for (char c : frase) {
char lowerC = std::tolower(c);
if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {vocales++; }
else if (lowerC >= 'a' && lowerC <= 'z') {consonantes++;}
else if (std::isdigit(c)) {digitos++; }
else if (std::isspace(c)) {espacios++; }
else {otros++; }}
//puro if jsjsjsjs
std::cout << "Vocales: " << vocales << '\n';
std::cout << "Consonantes: " << consonantes << '\n'; 
std::cout << "Digitos: " << digitos << '\n'; 
std::cout << "Espacios: " << espacios << '\n'; 
std::cout << "Otros simbolos: " << otros << '\n';
return 0; } 
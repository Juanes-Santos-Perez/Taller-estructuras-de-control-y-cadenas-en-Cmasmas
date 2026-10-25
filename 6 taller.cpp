#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
std::string password;
std::cout << "Ingrese la contrasena: ";
std::getline(std::cin, password);
int tiene_mayus = 0;int tiene_minus = 0;int tiene_digito = 0;int tiene_simbolo = 0;int contador_caracteres = 0;int i = 0;
while (password[i] != '\0') {char c = password[i];contador_caracteres = contador_caracteres + 1;
if (std::isupper(c)) {tiene_mayus = 1;} 
else if (std::islower(c)) {tiene_minus = 1;} 
else if (std::isdigit(c)) {tiene_digito = 1;} 
else {if (!std::isspace(c)) {tiene_simbolo = 1;}}
i = i + 1;}
int es_valida = 1;
if (contador_caracteres < 8) {
std::cout << "- Debe tener al menos 8 caracteres.\n";
es_valida = 0;}
if (tiene_mayus == 0) {std::cout << "- Falta al menos una letra mayuscula.\n";es_valida = 0;}
if (tiene_minus == 0) {std::cout << "- Falta al menos una letra minuscula.\n";es_valida = 0;}
if (tiene_digito == 0) {std::cout << "- Falta al menos un digito.\n";es_valida = 0;}
if (tiene_simbolo == 0) {std::cout << "- Falta al menos un simbolo.\n";es_valida = 0;}
if (es_valida == 1) {std::cout << "Contrasena valida.\n";} 
else {std::cout << "Contrasena invalida.\n";}return 0;}
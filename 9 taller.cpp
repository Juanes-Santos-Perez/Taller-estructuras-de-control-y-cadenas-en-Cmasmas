#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
std::cout << "1. Comprimir\n";std::cout << "2. Descomprimir\n";
int opcion;std::cout << "Opcion: ";std::cin >> opcion;std::cin.ignore();
if (opcion == 1) {std::string cadena;std::cout << "Cadena: ";std::getline(std::cin, cadena);std::string comprimida = "";int i = 0;int n = cadena.length();
while (i < n) {char actual = cadena[i];int contador = 0;int j = i;
while (j < n) {if (cadena[j] == actual) {contador = contador + 1;j = j + 1;} else {j = n;}}
comprimida = comprimida + actual + std::to_string(contador);i = i + contador;}std::cout << "Comprimida: " << comprimida << '\n';} 
else {
if (opcion == 2) {std::string cadena;std::cout << "Cadena: ";std::getline(std::cin, cadena); std::string descomprimida = "";int i = 0;int n = cadena.length();int formato_valido = 1;
if (n == 0) {formato_valido = 0;}
while (i < n) {
if (formato_valido == 1){
if (std::isdigit(cadena[i])) {formato_valido = 0;} 
else {char letra = cadena[i];i = i + 1;
if (i >= n) {formato_valido = 0;} 
else {if (!std::isdigit(cadena[i])) {formato_valido = 0;} 
else {int valor = 0;int leyendo_digitos = 1;
while (i < n) { if (leyendo_digitos == 1) {if (std::isdigit(cadena[i])) {int digito = cadena[i] - 48;valor = valor * 10 + digito;i = i + 1;} else {leyendo_digitos = 0;}} else {i = n;}}
if (valor <= 0) {formato_valido = 0;} 
else {int k = 0;while (k < valor) {descomprimida = descomprimida + letra;k = k + 1;}}}}}} else {i = n;}}
if (formato_valido == 1) {std::cout << "Descomprimida: " << descomprimida << '\n';} else {std::cout << "Formato invalido.\n"; }}}return 0;}
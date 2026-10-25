#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
int main() {
std::cout << std::fixed << std::setprecision(2) << std::sqrt(2) << '\n';
std::string frase; std::cout << "Ingrese una frase: "; std::getline(std::cin, frase);
int i = 0;int j = frase.length() - 1;int es_palindromo = 1;
while (i < j) {int avanza_i = 0;int retrocede_j = 0;if (!std::isalpha(frase[i])) {i = i + 1;avanza_i = 1;}
if (!std::isalpha(frase[j])) {j = j - 1;retrocede_j = 1;}
if (avanza_i == 0)
{if (retrocede_j == 0) {char izq = std::tolower(frase[i]);char der = std::tolower(frase[j]);if (izq != der) {es_palindromo = 0;i = j;}
else {i = i + 1;j = j - 1;}}}}
if (es_palindromo == 1) {std::cout << "Es palindromo.\n";}
else {std::cout << "No es palindromo.\n";} return 0;}
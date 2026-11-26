#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 4) Escreva um programa que leia dez números inteiros e determine:
// a. O maior número;
// b. O menor número.
// No final, apresente os dois valores no ecrã

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Menor e Maior Número" << std::endl;

    int menor = 0;
    int maior = 0;
    int numero = 0;
    for (int i = 0; i < 10; i++) {
        std::cout << std::endl << "Introduza um número inteiro: ";
        std::cin >> numero;

        if (numero > maior) {
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        }
    }

    std::cout << std::endl << "O menor número é: " << menor << " e o maoir número é: " << maior << std::endl;

    return 0;
}

#include <iomanip>
#include <iostream>
#include <windows.h>

// 1) Escreva um algoritmo que leia um número
// inteiro e indique no ecrã se ele é par ou ímpar.
// Aceite apenas números no intervalo entre 1 e 100.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Par ou Ímpar" << std::endl;

    std::cout << std::endl << "Introduza um número inteiro: ";

    int numeroInteiro = 0;
    std::cin >> numeroInteiro;

    if (numeroInteiro >= 0 && numeroInteiro <= 100) {
        if (numeroInteiro % 2 == 0) {
            std::cout << "O número " << numeroInteiro << " é par" << std::endl;
        } else {
            std::cout << "O número " << numeroInteiro << " é ímpar" << std::endl;
        }
    } else {
        std::cout << "O número introduzido não está entre 0 e 100." << std::endl;
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

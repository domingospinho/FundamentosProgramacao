#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

//1) Escreva um programa que apresente no ecrã:
//a) Os dez primeiros números inteiros positivos
//b) Dez números inteiros consecutivos, começando em -6
//c) Os dez primeiros números pares positivos
//d) Os dez primeiros múltiplos positivos de 4

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Os 10 primeiros números" << std::endl;

    std::cout << std::endl << "Os dez primeiros números inteiros positivos: ";
    for (int i = 1; i <= 10; i++) {
        if (i > 1) {
            std::cout << ", ";
        }
        std::cout << i;
    }

    std::cout << std::endl << "Dez números inteiros consecutivos, começando em -6: ";
    for (int i = -6; i < 4; i++) {
        if (i > -6) {
            std::cout << ", ";
        }
        std::cout << i;
    }

    std::cout << std::endl << "Os dez primeiros números pares positivos: ";
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            if (i > 2) {
                std::cout << ", ";
            }
            std::cout << i;
        }
    }

    std::cout << std::endl << "Os dez primeiros números pares positivos: ";
    int i = 1;
    int totalNumerosPares = 0;
    while (totalNumerosPares < 10) {
        if (i % 2 == 0) {
            if (totalNumerosPares >= 1) {
                std::cout << ", ";
            }

            std::cout << i;
            totalNumerosPares++;
        }

        i++;
    }

    std::cout << std::endl << "Os dez primeiros múltiplos positivos de 4: ";
    int z = 1;
    int totalMultiplosPositivos4 = 0;
    while (totalMultiplosPositivos4 < 10) {
        if (z % 4 == 0) {
            if (totalMultiplosPositivos4 >= 1) {
                std::cout << ", ";
            }

            std::cout << z;
            totalMultiplosPositivos4++;
        }

        z++;
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;
    std::cout << std::endl;
    return 0;
}

#include <iomanip>
#include <iostream>
#include <windows.h>

// 4) Crie um programa que simule o funcionamento de uma caixa multibanco. O utilizador deve indicar
// o montante que pretende levantar e o programa deve apresentar a quantidade de notas a entregar.
// Considere que a caixa multibanco dá prioridade às notas de maior valor e que dispõe de notas de
// 100, 50, 20, 10 e 5 euros. O programa deve apresentar apenas as notas efetivamente utilizadas.
// Por exemplo, para um levantamento de 235 euros, o programa deve apresentar:
// 2 notas de 100 euros.
// 1 nota de 20 euros.
// 1 nota de 10 euros.
// 1 nota de 5 euros.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Caixa multibanco" << std::endl;

    int montante = 0;

    std::cout << std::endl << "Introduza o montante que pretende levantar: ";
    std::cin >> montante;

    int totalNotas = 0;

    if (montante >= 100) {
        totalNotas = montante / 100;
        montante = montante % 100;

        std::cout << std::endl << totalNotas << " notas de 100 euros.";
    }

    if (montante >= 50) {
        totalNotas = montante / 50;
        montante = montante % 50;

        std::cout << std::endl << totalNotas << " notas de 50 euros.";
    }

    if (montante >= 20) {
        totalNotas = montante / 20;
        montante = montante % 20;

        std::cout << std::endl << totalNotas << " notas de 20 euros.";
    }

    if (montante >= 10) {
        totalNotas = montante / 10;
        montante = montante % 10;

        std::cout << std::endl << totalNotas << " notas de 10 euros.";
    }

    if (montante >= 5) {
        totalNotas = montante / 5;
        montante = montante % 5;

        std::cout << std::endl << totalNotas << " notas de 5 euros.";
    }

    return 0;
}

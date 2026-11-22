#include <iomanip>
#include <iostream>
#include <windows.h>

// 1) Implemente um programa que calcule o desconto para a Segurança Social de um trabalhador.
// Dado o valor do salário, o programa deve devolver o valor do desconto correspondente.
// O desconto é de 11% do salário, até ao limite máximo de 121 euros. Assim, o programa deve
// devolver 11% do salário ou 121 euros, consoante o valor mais baixo.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Seguranca social!" << std::endl;

    double salario = 0;

    std::cout << std::endl << "Introduza o valor do salario: ";
    std::cin >> salario;

    double desconto = salario * 0.11;

    double total = 0;

    if (desconto > 121) {
        total = salario - 121;
    } else {
        total = salario - desconto;
    }

    std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

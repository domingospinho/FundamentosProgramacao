#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 4) Escreva um programa que leia um número inteiro entre 1 e 9 e apresente a sua tabuada de
// multiplicação, de 1 a 10. Por exemplo, para o número 5:
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// ...
// 5 x 10 = 50
// Depois de apresentar a tabuada, pergunte ao utilizador se deseja consultar outra tabuada.
// Se a resposta for afirmativa, por exemplo, S, o programa deve repetir o processo. Caso contrário,
// deve terminar.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Tabuada" << std::endl;

    int numero = 0;
    std::cout << std::endl << "Introduza um número entre 1 e 9: ";
    std::cin >> numero;

    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

#include <iomanip>
#include <iostream>
#include <windows.h>


// 3) Dados a altura e o sexo de uma pessoa, construa um algoritmo que calcule o seu peso ideal, de
// acordo com as seguintes fórmulas:
// Para homens: (72,7 * altura) - 58
// Para mulheres: (62,1 * altura) - 44,7

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Peso ideal" << std::endl;

    double altura = 0;
    char sexo = ' ';

    std::cout << std::endl << "Introduza a altura em metros: ";
    std::cin >> altura;

    std::cout << std::endl << "Introduza o sexo (M,F): ";
    std::cin >> sexo;

    double total = 0;

    switch (sexo) {
        case 'M':
            total = (72.7 * altura) - 58;
            break;
        case 'F':
            total = (62.1 * altura) - 44.7;
            break;
        //default:
    }

    std::cout << std::endl << "O peso ideal é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

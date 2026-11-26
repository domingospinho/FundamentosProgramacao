#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 3) O IMC, Índice de Massa Corporal, é
// utilizado para obter uma indicação sobre
// a condição de peso de uma pessoa adulta.
// A fórmula para calcular o IMC é:
// Leia o peso, em quilogramas, e a altura,
// em metros, de uma pessoa adulta. Em seguida,
// calcule o IMC e indique a condição correspondente,
// de acordo com a tabela:
// Classificação IMC(kg/m²)
// Baixo Peso < 18,5
// Peso Normal 18,5 a 24,9
// Excesso de Peso 25 a 29,9
// Obesidade Grau I 30 a 34,9
// Obesidade Grau II 35 a 39,9
// Obesidade Mórbida ≥ 40
// O programa deve apresentar o valor calculado do IMC e a respetiva condição.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "IMC" << std::endl;

    std::cout << std::endl << "Introduza o peso em KG: ";

    double pesoEmKg = 0;
    std::cin >> pesoEmKg;

    std::cout << std::endl << "Introduza o peso em KG: ";

    double alturaEmMetros = 0;
    std::cin >> alturaEmMetros;

    double imc = pesoEmKg / (alturaEmMetros * alturaEmMetros);

    if (imc < 18.5) { // Baixo Peso
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Baixo Peso)" << std::endl;
    } else if (imc <= 24.9) { // Peso Normal
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Peso Normal)" << std::endl;
    } else if (imc <= 29.9) { // Excesso de Peso 25 a 29,9
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Excesso de Peso)" << std::endl;
    } else if (imc <= 34.9) { // Obesidade Grau I 30 a 34,9
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Obesidade Grau I)" << std::endl;
    } else if (imc <= 39.9) { // Obesidade Grau II 35 a 39,9
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Obesidade Grau II)" << std::endl;
    } else if (imc >= 40) { // Obesidade Mórbida ≥ 40
        std::cout << std::endl << "O IMC é: " << std::fixed << std::setprecision(2) << imc << " (Obesidade Mórbida)" << std::endl;
    }

    return 0;
}

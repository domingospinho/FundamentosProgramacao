#include <iostream>
#include <iomanip>
// 2) Escreva um algoritmo que leia o salário de
// um funcionário e aplique um aumento de 15%.
// Depois, desconte 8% para impostos sobre o salário
// já aumentado. Apresente o salário inicial, o salário
// após o aumento e o salário final, depois do desconto
// dos impostos.
// Exemplo de execução
// Salário inicial: 1200
// Salário após o aumento: 1380.00 euros
// Salário final, depois dos impostos: 1269.60 euros

int main() {
    std::cout << "Folha salarial" << std::endl;

    double salarioInicial = 0;
    double salarioComAumento = 0;
    double salarioFinal = 0;

    std::cout << "Introduza o salario inicial: ";
    std::cin >> salarioInicial;

    salarioComAumento = salarioInicial * 1.15;
    salarioFinal = salarioComAumento * 0.92;

    std::cout << "Salario inicial: " << salarioInicial << " euros" << std::endl;
    std::cout << "Salario apos aumento: " << std::fixed << std::setprecision(2) << salarioComAumento << " euros" << std::endl;
    std::cout << "Salario final: " << std::fixed << std::setprecision(2) << salarioFinal << " euros" << std::endl;

    return 0;
}

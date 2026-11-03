#include <iomanip>
#include <iostream>

// 6) Depois de dois anos de namoro, um casal decidiu
// viver junto para reduzir as despesas e dividi-las
// de forma equilibrada. Escreva um algoritmo que leia
// o salário mensal de cada pessoa e o valor total das
// despesas. Calcule e apresente a percentagem das despesas
// que cada pessoa deve pagar, bem como o respetivo valor. A
// divisão deve ser proporcional aos salários: quem ganha mais
// paga uma parte maior das despesas.
// Exemplo de execução
// Salário da primeira pessoa: 1200
// Salário da segunda pessoa: 1800
// Total das despesas: 1500
// A primeira pessoa deve pagar 40,00% das despesas: 600.00
// A segunda pessoa deve pagar 60,00% das despesas: 900.00

int main() {
    std::cout << "Despesas Equilibradas" << std::endl;

    double salario1Pessoa = 0;
    double salario2Pessoa = 0;
    double totalDespesas = 0;
    double percentagemPagar1Pessoa = 0.40;
    double percentagemPagar2Pessoa = 0.60;

    std::cout << "Introduza o salario da 1 pessoa: ";
    std::cin >> salario1Pessoa;

    std::cout << "Introduza o salario da 2 pessoa: ";
    std::cin >> salario2Pessoa;

    std::cout << "Introduza o total de despesas: ";
    std::cin >> totalDespesas;

    if (salario1Pessoa > salario2Pessoa) {
        percentagemPagar1Pessoa = 0.60;
        percentagemPagar2Pessoa = 0.40;
    }

    std::cout << "A primeira pessoa deve pagar " << std::fixed << std::setprecision(2) << percentagemPagar1Pessoa * 100 << "% das despesas: " << std::fixed << std::setprecision(2) << totalDespesas * percentagemPagar1Pessoa << std::endl;
    std::cout << "A segunda pessoa deve pagar " << std::fixed << std::setprecision(2) << percentagemPagar2Pessoa * 100 << "% das despesas: " << std::fixed << std::setprecision(2) << totalDespesas * percentagemPagar2Pessoa << std::endl;

    return 0;
}

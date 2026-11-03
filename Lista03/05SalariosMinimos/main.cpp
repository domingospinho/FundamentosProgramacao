#include <iomanip>
#include <iostream>

// 5) Escreva um algoritmo que leia o valor do salário
// mínimo e o salário mensal de um funcionário. Calcule
// e apresente quantos salários mínimos correspondem ao
// salário desse funcionário.
// Exemplo de execução
// Valor do salário mínimo: 820
// Salário do funcionário: 1640
// O salário do funcionário corresponde a 2.00 salários mínimos.

int main() {
    std::cout << "Salarios Minimos" << std::endl;

    double valorSalarioMinimo = 0;
    double valorSalarioFuncionario = 0;

    std::cout << "Valor do salario minimo: ";
    std::cin >> valorSalarioMinimo;

    std::cout << "Valor do salario do funcionario: ";
    std::cin >> valorSalarioFuncionario;

    double total = valorSalarioFuncionario / valorSalarioMinimo;

    std::cout << "O salario do funcionario corresponde a " << std::fixed << std::setprecision(2) << total << " salarios minimos." << std::endl;

    return 0;
}

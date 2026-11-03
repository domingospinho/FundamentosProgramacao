#include <iomanip>
#include <iostream>

// 4) O Pedrinho tem um mealheiro com muitas
// moedas e quer saber quantos euros conseguiu
// poupar. Escreva um algoritmo que leia a quantidade
// de moedas de cada valor e apresente o montante total
// poupado, em euros. Considere moedas de 1, 2, 5, 10, 20
// e 50 cêntimos, bem como moedas de 1 € e 2 €. Se não existir
// nenhuma moeda de determinado valor, a quantidade correspondente será zero.
// Exemplo de execução
// Moedas de 1 cêntimo: 5
// Moedas de 2 cêntimos: 3
// Moedas de 5 cêntimos: 4
// Moedas de 10 cêntimos: 6
// Moedas de 20 cêntimos: 2
// Moedas de 50 cêntimos: 3
// Moedas de 1 euro: 4
// Moedas de 2 euros: 1
// Total poupado: 9.28 euros

int main() {
    std::cout << "Mealheiro" << std::endl;

    int totalMoedas1Centimo = 0;
    int totalMoedas2Centimos = 0;
    int totalMoedas5Centimos = 0;
    int totalMoedas10Centimos = 0;
    int totalMoedas20Centimos = 0;
    int totalMoedas50Centimos = 0;
    int totalMoedas1Euro = 1;
    int totalMoedas2Euro = 2;
    double total = 0;

    std::cout << "Moedas de 1 centimo: ";
    std::cin >> totalMoedas1Centimo;

    std::cout << "Moedas de 2 centimos: ";
    std::cin >> totalMoedas2Centimos;

    std::cout << "Moedas de 5 centimos: ";
    std::cin >> totalMoedas5Centimos;

    std::cout << "Moedas de 10 centimos: ";
    std::cin >> totalMoedas10Centimos;

    std::cout << "Moedas de 20 centimos: ";
    std::cin >> totalMoedas20Centimos;

    std::cout << "Moedas de 50 centimos: ";
    std::cin >> totalMoedas50Centimos;

    std::cout << "Moedas de 1 euro: ";
    std::cin >> totalMoedas1Euro;

    std::cout << "Moedas de 2 euros: ";
    std::cin >> totalMoedas2Euro;

    total = totalMoedas1Centimo * 0.01 + totalMoedas2Centimos * 0.02 + totalMoedas5Centimos * 0.05;
    total += totalMoedas10Centimos * 0.10 + totalMoedas20Centimos * 0.20 + totalMoedas50Centimos * 0.50;
    total += totalMoedas1Euro * 1 + totalMoedas2Euro * 2;

    std::cout << "Total Poupado: " << std::fixed << std::setprecision(2) << total << " euros" << std::endl;

    return 0;
}

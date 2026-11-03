#include <iostream>

// 1) O restaurante a quilo Bem-Bom cobra 21,00 €
// por quilograma de comida. Escreva um algoritmo
// que leia o peso da comida servida ao cliente,
// em gramas, e apresente o valor a pagar. A balança
// desconta automaticamente o peso do prato; por isso,
// deve ser considerado apenas o peso da comida.
// Exemplo de execução Peso da comida (em gramas): 750
// Valor a pagar: 15.75 euros

int main() {
    double precoKilo = 21.00;
    double pesoComidaEmKilos = 0;
    double pesoComidaEmGramas = 0;
    double total = 0;

    std::cout << "Preco da comida" << std::endl;

    std::cout << std::endl << "Introduza o peso da comida em gramas: ";
    std::cin >> pesoComidaEmGramas;

    pesoComidaEmKilos = (pesoComidaEmGramas / 1000);
    total = precoKilo * pesoComidaEmKilos;

    std::cout << std::endl << "Tem a pagar " << total << " euros por " << pesoComidaEmKilos << "kg de comida." << std::endl;

    return 0;
}

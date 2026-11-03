#include <iostream>

// 3) A fábrica de sumos Sumo Meu vende os
// seus produtos em três formatos: garrafas
// de 33 cl, garrafas de 75 cl e garrafas de
// 1,3 litros. Escreva um algoritmo que leia
// o número de garrafas de cada formato compradas
// por um cliente e calcule a quantidade total de
// sumo comprada, em litros.
// Exemplo de execução
// Número de garrafas de 33 cl: 4
// Número de garrafas de 75 cl: 2
// Número de garrafas de 1,3 litros: 3
// Quantidade total comprada: 6.72 litros

int main() {
    std::cout << "Fabrica de sumos" << std::endl;

    int numeroGarrafas33Cl = 0;
    int numeroGarrafas75Cl = 0;
    int numeroGarrafas1_3L = 0;
    double total = 0;

    std::cout << "Introduza o numero de garrafas de 33cl: ";
    std::cin >> numeroGarrafas33Cl;

    std::cout << "Introduza o numero de garrafas de 75cl: ";
    std::cin >> numeroGarrafas75Cl;

    std::cout << "Introduza o numero de garrafas de 1.3l: ";
    std::cin >> numeroGarrafas1_3L;

    total = numeroGarrafas33Cl * 0.330 + numeroGarrafas75Cl * 0.75 + numeroGarrafas1_3L * 1.3;

    std::cout << "A quantidade total de sumo comprada foi: " << total << " litros" << std::endl;

    return 0;
}

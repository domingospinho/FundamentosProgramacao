#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 5) Escreva um programa para converter valores entre reais, kwanzas e euros.
// Inicialmente, o utilizador deve introduzir a cotação atual de cada moeda em relação ao
// euro:
// o Cotação do real
// o Cotação do kwanza
// Depois, apresente o seguinte menu:
// a. Converter de euro para kwanza
// b. Converter de euro para real
// c. Converter de kwanza para euro
// d. Converter de kwanza para real
// e. Converter de real para euro
// f. Converter de real para kwanza
// Leia a opção escolhida e o valor a converter na moeda de origem. Em seguida,
// apresente o valor correspondente na moeda de destino. O programa deve executar
// apenas uma conversão e terminar. Considere que as cotações representam o valor de
// uma unidade da respetiva moeda em euros.
// CONVERSOR DE MOEDAS
// Introduza a cotação atual do real em euros:
// 1 real = 0.17
// Introduza a cotação atual do kwanza em euros:
// 1 kwanza = 0.0016
// Escolha uma opção:
// A) Converter de euro para kwanza
// B) Converter de euro para real
// C) Converter de kwanza para euro
// D) Converter de kwanza para real
// E) Converter de real para euro
// F) Converter de real para kwanza
// Opção: D
// Introduza o valor em kwanzas: 10000
// 10000.00 Kz correspondem a R$ 94.12
// Programa terminado.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Conversor de moeda" << std::endl;

    double cotacaoReal = 0;
    double cotacaoKwanza = 0;

    std::cout << std::endl << "Introduza a cotação atual do real em euros: ";
    std::cin >> cotacaoReal;
    std::cout << std::endl << "Introduza a cotação atual do kwanza em euros: ";
    std::cin >> cotacaoKwanza;

    std::cout << std::endl << "Menu" << std::endl;
    std::cout << "a. Converter de euro para kwanza" << std::endl;
    std::cout << "b. Converter de euro para real" << std::endl;
    std::cout << "c. Converter de kwanza para euro" << std::endl;
    std::cout << "d. Converter de kwanza para real" << std::endl;
    std::cout << "e. Converter de real para euro" << std::endl;
    std::cout << "f. Converter de real para kwanza" << std::endl;
    std::cout << "Digite a opção do menu correspondente à conversão que deseja: ";
    char opcao = ' ';
    std::cin >> opcao;

    double valor = 0;

    switch (opcao) {
        case 'a':
            std::cout << "Introduza o valor em euros: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "€ correspondem a " << std::fixed << std::setprecision(2) << (valor / cotacaoKwanza) << "Kz" << std::endl;
            break;
        case 'b':
            std::cout << "Introduza o valor em euros: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "€ correspondem a R$ " << std::fixed << std::setprecision(2) << (valor / cotacaoReal) << "" << std::endl;
            break;
        case 'c':
            std::cout << "Introduza o valor em kwanzas: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "Kz correspondem a " << std::fixed << std::setprecision(2) << (valor * cotacaoKwanza) << "€" << std::endl;
            break;
        case 'd':
            std::cout << "Introduza o valor em kwanzas: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "Kz correspondem R$ " << std::fixed << std::setprecision(2) << ((valor * cotacaoKwanza) / cotacaoReal) << "" << std::endl;
            break;
        case 'e':
            std::cout << "Introduza o valor em real: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "R$ correspondem " << std::fixed << std::setprecision(2) << (valor * cotacaoReal) << "€" << std::endl;
            break;
        case 'f':
            std::cout << "Introduza o valor em real: ";
            std::cin >> valor;

            std::cout << std::endl << valor << "R$ correspondem " << std::fixed << std::setprecision(2) << ((valor * cotacaoReal) / cotacaoKwanza) << "Kz" << std::endl;
            break;
    }

    //

    return 0;
}

#include <iomanip>
#include <iostream>
#include <windows.h>

// 6) Elabore um algoritmo que calcule o valor a pagar por um produto, tendo em conta o preço
// normal indicado na etiqueta e a modalidade de pagamento selecionada.
// Utilize os seguintes códigos para identificar a modalidade de pagamento e efetuar o cálculo
// correspondente:

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Modalidade de Pagamento" << std::endl;

    double precoNormal = 0;
    int modalidadePagamento = 0;

    std::cout << std::endl << "Introduza o preço normal do produto indicado na etiqueta: ";
    std::cin >> precoNormal;

    std::cout << std::endl << "1 - Pagamento a pronto, em numerário.";
    std::cout << std::endl << "2 - Pagamento a pronto, cartão de débito.";
    std::cout << std::endl << "3 - Pagamento em 2 prestações.";
    std::cout << std::endl << "4 - Pagamento em 3 prestações.";
    std::cout << std::endl << "Introduza a modalidade de pagamento: ";
    std::cin >> modalidadePagamento;

    switch (modalidadePagamento) {
        case 1:
            precoNormal *= 0.90;
            break;
        case 2:
            break;
        case 3:
            precoNormal *= 1.10;
            break;
        case 4:
            precoNormal *= 1.15;
            break;
    }

    std::cout << std::endl << "O valor a pagar pelo produto é: " << std::fixed << std::setprecision(2) << precoNormal << std::endl;

    return 0;
}

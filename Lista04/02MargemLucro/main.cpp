#include <iomanip>
#include <iostream>
#include <windows.h>

// 2) Um comerciante comprou um produto e pretende vendê-lo com uma margem de lucro que varia
// consoante o preço de compra. Deve aplicar as seguintes margens:
// • 45% de lucro, se o preço de compra for inferior a 20 euros.
// • 35% de lucro, se o preço de compra for igual ou inferior a 50 euros.
// • 25% de lucro, se o preço de compra for superior a 50 euros.
// Leia o preço de compra do produto e apresente o respetivo preço de venda.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Margem de lucro" << std::endl;

    double precoCompraProduto = 0;

    std::cout << std::endl << "Introduza o preço de compra do produto: ";
    std::cin >> precoCompraProduto;

    double total = 0;

    if (precoCompraProduto < 20) {
        total = precoCompraProduto * 1.45;
    } else if (precoCompraProduto <= 50) {
        total = precoCompraProduto * 1.35;
    } else if (precoCompraProduto > 50) {
        total = precoCompraProduto * 1.25;
    }

    std::cout << std::endl << "O preço de venda deve ser: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

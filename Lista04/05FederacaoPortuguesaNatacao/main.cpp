#include <iomanip>
#include <iostream>
#include <windows.h>

// 5) A Federação Portuguesa de Natação vai organizar provas de qualificação para o próximo
// Campeonato do Mundo. Desenvolva um algoritmo que receba a idade de um nadador e
// apresente a respetiva categoria, de acordo com a tabela seguinte:
// Categoria Idade
// Infantil A 5-7 anos
// Infantil B 8-10 anos
// Juvenil A 11-13 anos
// Juvenil B 14-17 anos
// Sénior Maiores de 18 anos

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Federação Portuguesa de Natação" << std::endl;

    double idade = 0;

    std::cout << std::endl << "Introduza a idade: ";
    std::cin >> idade;

    if (idade >= 5 && idade <= 7) {
        std::cout << std::endl << "Infantil A 5-7 anos";
    } else if (idade >= 8 && idade <= 10) {
        std::cout << std::endl << "Infantil B 8-10 anos";
    } else if (idade >= 11 && idade <= 13) {
        std::cout << std::endl << "Juvenil A 11-13 anos";
    } else if (idade >= 14 && idade <= 17) {
        std::cout << std::endl << "Juvenil B 14-17 anos";
    } else if (idade >= 18) {
        std::cout << std::endl << "Sénior Maiores de 18 anos";
    } else {
        std::cout << std::endl << "Idade inválida!";
    }

    return 0;
}

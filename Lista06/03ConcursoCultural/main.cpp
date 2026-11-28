#include <string>
#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 3) Está a ser organizado um concurso cultural a:
// o Raparigas com idade até 12 anos;
// o Pessoas idosas com idade superior a 59 anos.
// Leia o nome, a idade e o género de 10 candidatos. Depois de cada leitura, indique se a pessoa
// está apta a participar no concurso. Considere que uma pessoa está apta quando:
// o É do sexo feminino e tem, no máximo, 12 anos; ou
// o Tem mais de 59 anos.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Concurso cultural" << std::endl;

    for (int i = 0; i < 10; i++) {
        string nome = "";
        int idade = 0;
        char genero = ' ';

        std::cout << std::endl << "Introduza o nome: ";
        std::cin >> nome;

        std::cout << std::endl << "Introduza a idade: ";
        std::cin >> idade;

        std::cout << std::endl << "Introduza o género: ";
        std::cin >> genero;

        if (genero == 'F' && (idade <= 12 || idade > 59)) {
            std::cout << nome << " está apta a participar no concuro." << std::endl;
        } else {
            std::cout << nome << " não está apta a participar no concuro." << std::endl;
        }
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

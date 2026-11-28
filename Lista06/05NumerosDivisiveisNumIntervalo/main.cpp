#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 5) Escreva um programa que apresente todos os números divisíveis por um valor indicado pelo
// utilizador, dentro de um intervalo também indicado pelo utilizador.
// Um número é divisível por outro quando o resto da divisão inteira é igual a zero.
// O programa deve pedir, pela seguinte ordem:
// o O divisor;
// o O início do intervalo;
// o O fim do intervalo.ComentárioRealçar
// Exemplo:
// Introduza o divisor: 3
// Início do intervalo: 17
// Fim do intervalo: 29
// Números divisíveis por 3 no intervalo de 17 a 29:
// 18 21 24 27

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Números divisíveis num intervalo" << std::endl;

    int divisor = 0;
    int inicioDoIntervalo = 0;
    int fimDoIntervalo = 0;

    std::cout << std::endl << "Introduza um divisor: ";
    std::cin >> divisor;

    std::cout << std::endl << "Introduza um número para o inicio do intervalo: ";
    std::cin >> inicioDoIntervalo;

    std::cout << std::endl << "Introduza um número para o fim do intervalo: ";
    std::cin >> fimDoIntervalo;

    std::cout << std::endl << "Números divisíveis por " << divisor << " no intervalo de " << inicioDoIntervalo << " a " << fimDoIntervalo << "." << std::endl; ": ";
    for (int i = inicioDoIntervalo; i <= fimDoIntervalo; i++) {
        if (i % divisor == 0) {
            std::cout << i << " ";
        }
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

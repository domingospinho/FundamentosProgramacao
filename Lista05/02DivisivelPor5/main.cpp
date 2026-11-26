#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 2) Crie um programa que leia um número inteiro introduzido pelo utilizador e verifique se
// esse número é divisível por 5. O programa deve apresentar uma mensagem adequada,
// por exemplo:
// O número XX é divisível por 5.
// ou
// O número XX não é divisível por 5.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Número divisível por 5?" << std::endl;

    std::cout << std::endl << "Introduza um número inteiro: ";

    int numeroInteiro = 0;
    std::cin >> numeroInteiro;

    if (numeroInteiro % 5 == 0) {
        std::cout << "O número " << numeroInteiro << " é divisível por 5." << std::endl;
    } else {
        std::cout << "O número " << numeroInteiro << " não é divisível por 5." << std::endl;
    }

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

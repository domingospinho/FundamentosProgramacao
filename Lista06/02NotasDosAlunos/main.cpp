#include <iomanip>
#include <iostream>
#include <windows.h>

using namespace std;

// 2) Crie um algoritmo que leia as notas de 15 alunos e calcule:
// a) A soma das notas;
// b) A nota mais baixa;
// c) A nota mais alta;
// d) A média da turma.
// No final, apresente estes valores no ecrã.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Notas dos alunos" << std::endl;

    double nota = 0;
    double somaDasNotas = 0;
    double notaMaisBaixa = 9999;
    double notaMaisAlta = 0;
    double mediaDaTurma = 0;

    for (int i = 0; i < 15; i++) {
        std::cout << std::endl << "Introduza uma nota: ";
        std::cin >> nota;

        somaDasNotas += nota;

        if (nota < notaMaisBaixa) {
            notaMaisBaixa = nota;
        } else if (nota > notaMaisAlta) {
            notaMaisAlta = nota;
        }
    }

    mediaDaTurma = somaDasNotas / 15;

    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A soma das notas: " << somaDasNotas << std::endl;
    std::cout << "A nota mais baixa: " <<notaMaisBaixa << std::endl;
    std::cout << "A nota mais alta: " << notaMaisAlta << std::endl;
    std::cout << "A média da turma: " << mediaDaTurma << std::endl;

    //std::cout << std::endl << "O salario final é: " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

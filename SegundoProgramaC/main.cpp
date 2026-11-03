#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    //std::cout << "Hello, World!" << std::endl;

    int idade;
    string nome;

    cout << "Informe sua idade: ";
    cin >> idade;
    //cin.ignore();

    cout << "Informe sua nome: ";
    getline(cin, nome);

    cout << "O seu nome e: " << nome << "e a sua idade é " << idade << " anos" << endl;

    return 0;
}

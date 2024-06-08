#include <iostream>
using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    // Números menores que 2 não são primos
    if (numero < 2) {
        return false;
    }

    // Verifica se o número é divisível por algum número de 2 até a sua raiz quadrada
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    // Solicitação para o usuário inserir um número
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " e um numero primo." << endl;
    } else {
        cout << numero << " nao e um numero primo." << endl;
    }
}

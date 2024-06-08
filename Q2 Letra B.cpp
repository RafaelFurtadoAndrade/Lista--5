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
    cout << "Números primos de 2 a 1000:" << endl;

    // Verifica e imprime todos os números primos de 2 a 1000
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

// Fun��o para verificar se um n�mero � primo (m�todo 1: at� n/2)
bool ehPrimo1(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

// Fun��o para verificar se um n�mero � perfeito
bool ehPerfeito(int numero) {
    int soma = 0;

    // Calcula a soma dos divisores pr�prios do n�mero
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    // Verifica se a soma � igual ao n�mero
    return soma == numero;
}

int main() {
    cout << "N�meros perfeitos de 1 a 1000:" << endl;

    // Verifica e imprime todos os n�meros perfeitos de 1 a 1000
    for (int i = 1; i <= 1000; ++i) {
        if (ehPerfeito(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
int main() {
    cout << "Numeros primos de 2 a 1000 usando o metodo 1 (ate n/2):" << endl;
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo1(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Numeros primos de 2 a 1000 usando o metodo 2 (ate a raiz quadrada de n):" << endl;
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo2(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

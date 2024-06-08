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

// Fun��o para verificar se um n�mero � primo (m�todo 2: at� a raiz quadrada de n)
bool ehPrimo2(int numero) {
    if (numero < 2) {
        return false;
    }

    int limite = sqrt(numero);
    for (int i = 2; i <= limite; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
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

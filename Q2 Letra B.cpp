#include <iostream>
using namespace std;

// Fun��o para verificar se um n�mero � primo
bool ehPrimo(int numero) {
    // N�meros menores que 2 n�o s�o primos
    if (numero < 2) {
        return false;
    }

    // Verifica se o n�mero � divis�vel por algum n�mero de 2 at� a sua raiz quadrada
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "N�meros primos de 2 a 1000:" << endl;

    // Verifica e imprime todos os n�meros primos de 2 a 1000
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

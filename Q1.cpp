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
    int numero;

    // Solicita��o para o usu�rio inserir um n�mero
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o n�mero � primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " e um numero primo." << endl;
    } else {
        cout << numero << " nao e um numero primo." << endl;
    }
}

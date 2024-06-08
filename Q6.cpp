#include <iostream>
using namespace std;

void torresDeHanoi(int n, char estacaInicial, char estacaDestino, char estacaTemporaria) {
    if (n == 1) {
        cout << estacaInicial << "-" << estacaDestino << endl;
        return;
    }
    torresDeHanoi(n - 1, estacaInicial, estacaTemporaria, estacaDestino);
    cout << estacaInicial << "-" << estacaDestino << endl;
    torresDeHanoi(n - 1, estacaTemporaria, estacaDestino, estacaInicial);
}

int main() {
    int n;
    cout << "Digite o número de discos: ";
    cin >> n;
    cout << "Instruções para resolver o problema das Torres de Hanoi:" << endl;
    torresDeHanoi(n, '1', '3', '2');
    return 0;
}

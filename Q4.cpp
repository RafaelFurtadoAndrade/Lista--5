#include <iostream>
using namespace std;

int main() {
    // Pergunta 1 de matemática
    cout << "Quanto e 6 * 7? " << endl;
    int resposta;
    cin >> resposta;

    // Verificando se a resposta está correta
    if (resposta == 42) {
        cout << "Muito bom!" << endl;
    } else {
        cout << "Nao. Por favor, tente novamente." << endl;
    }

    // Pergunta 2 de matemática
    cout << "Quanto e 6 * 6 / 3 - 2? " << endl;
    int resposta2;
    cin >> resposta2;

    // Verificando se a resposta está correta
    if (resposta2 == 10) {
        cout << "Muito bom!" << endl;
    } else {
        cout << "Nao. Por favor, tente novamente." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int lower_bound = 1;
    int upper_bound = 1000;
    int guess;
    char response;

    cout << "Pense em um numero entre 1 e 1000 e pressione Enter." << endl;
    cout << "Eu vou tentar adivinhar o numero em ate 7 perguntas." << endl;
    cout << "Responda com '<' se o numero que voce pensou for menor," << endl;
    cout << "'>' se for maior, e '=' se eu acertar." << endl;
    cout << "Pressione Enter para começar...";
    cin.get(); // Aguarda o usuário pressionar Enter para começar

    while (true) {
        guess = lower_bound + (upper_bound - lower_bound) / 2; // encontra o número no intervalo
        cout << "O numero que voce pensou e " << guess << "?" << endl;
        cout << "Responda com '<', '>', ou '=': ";
        cin >> response;

        if (response == '=') {
            cout << "Eu acertei!" << endl;
            break;
        } else if (response == '<') {
            upper_bound = guess - 1; // limite superior
        } else if (response == '>') {
            lower_bound = guess + 1; // limite inferior
        }

        if (lower_bound > upper_bound) {
            cout << "Voce trapaceou! Nao ha numeros dentro do intervalo fornecido." << endl;
            break;
        }
    }
    return 0;
}

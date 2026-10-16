#include <iostream>
using namespace std;

int main() {
    double stevilo1, stevilo2;
    char operacija;

    cout << "=== KALKULATOR V TERMINALU ===" << endl;

    cout << "Vnesi prvo stevilo: ";
    cin >> stevilo1;

    cout << "Vnesi operacijo (+, -, *, /): ";
    cin >> operacija;

    cout << "Vnesi drugo stevilo: ";
    cin >> stevilo2;

    switch (operacija) {
        case '+':
            cout << "Rezultat: " << stevilo1 + stevilo2 << endl;
            break;

        case '-':
            cout << "Rezultat: " << stevilo1 - stevilo2 << endl;
            break;

        case '*':
            cout << "Rezultat: " << stevilo1 * stevilo2 << endl;
            break;

        case '/':
            if (stevilo2 == 0) {
                cout << "Napaka: deljenje z nic ni dovoljeno!" << endl;
            } else {
                cout << "Rezultat: " << stevilo1 / stevilo2 << endl;
            }
            break;

        default:
            cout << "Napaka: neznana operacija!" << endl;
            break;
    }

    return 0;
}
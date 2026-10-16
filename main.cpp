
#include <iostream>
#include <cmath>
using namespace std;

// Kalkulator - dodajanje funkcionalnosti potenc
int main() {
    double stevilo1, stevilo2;
    char operacija;

    cout << "=== KALKULATOR V TERMINALU BRANCH MASTER ===" << endl;

    cout << "Vnesi prvo stevilo: ";
    cin >> stevilo1;

    cout << "Vnesi operacijo (+, -, *, /, ^): ";
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

        case '^':
            if (stevilo2 < 0 || stevilo2 != static_cast<int>(stevilo2)) {
                cout << "Napaka: eksponent mora biti "
                     << "nenegativno celo stevilo!" << endl;
            } else {
                cout << "Rezultat: " << pow(stevilo1, stevilo2) << endl;
            }
            break;

        default:
            cout << "Napaka: neznana operacija!" << endl;
            break;
    }

    return 0;
}

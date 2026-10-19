
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double stevilo1, stevilo2;
    char operacija;


    cout << "=== KALKULATOR V TERMINALU SPREMENJENO V GitHub1 ===" << endl;


    cout << "Vnesite prvo stevilo: ";
    cin >> stevilo1;

    cout << "Vnesite operacijo (+, -, *, /, ^): ";
    cin >> operacija;

    cout << "Vnesite drugo stevilo: ";
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

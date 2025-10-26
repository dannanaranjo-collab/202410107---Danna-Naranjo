#include <iostream>
using namespace std;

void wordsCounter() {
    int number, counter = 0;
    string words;

    cout << "Ingrese un numero: ";
    cin >> number;

    cout << "Ingrese varias palabras (cuando quiera terminar escriba fin): " << endl;
    cin >> words;

    while (words != "fin") {
        if (words.size() > number) {
            counter++;
        }
        cin >> words;
    }

    cout << "Hay " << counter << " palabras con mas de " << number << " letras" << endl;
}

int main() {
    wordsCounter();
    return 0;
}


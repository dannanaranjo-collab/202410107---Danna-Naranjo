#include <iostream>
using namespace std;

int contarPalabras(string frase) {
    int words = 0;

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == ' ') {
            words++;
        }
    }
    if (frase.size() > 0) {
        words++;
    }
    return words;
}

int contarPuntuacion(string frase) {
    int counter = 0;
    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == '.' || frase[i] == ',' || frase[i] == ';' || frase[i] == ':' || frase[i] == '!' || frase[i] == '?') {
            counter++;
        }
    }
    return counter;
}

bool terminaEnPunto(string frase) {
    if (frase.size() == 0) {
        return false;
    }
    if (frase[frase.size() - 1] == '.') {
        return true;
    } else {
        return false;
    }
}

void analyzeSentence () {
    string sentence;
    cout << "Ingrese una frase: ";
    getline(cin, sentence);

    int words = contarPalabras(sentence);
    int puntuation = contarPuntuacion(sentence);
    bool endPoint = terminaEnPunto(sentence);

    cout << "Palabras: " << words << endl;
    cout << "Signos de puntuacion: " << puntuation << endl;

    if (endPoint) {
        cout << "La frase termina con punto." << endl;
    } else {
        cout << "La frase no termina con punto." << endl;
    }
}

int main() {
    analyzeSentence();
    return 0;
}

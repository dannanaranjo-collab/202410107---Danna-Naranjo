#include <iostream>
using namespace std;

int contarVocales(string texto) {
    int counter = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            counter++;
        }
    }
    return counter;
}

int contarConsonantes(string texto) {
    int counter = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = tolower(texto[i]);
        if (c >= 'a' && c <= 'z') {
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                counter++;
            }
        }
    }
    return counter;
}

int contarNoAlfabeticos(string texto) {
    int counter = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = texto[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            counter++;
        }
    }
    return counter;
}

void analyzeText() {
    string text;
    cout << "Ingrese un texto : ";
    getline(cin, text);

    int vowels = contarVocales(text);
    int consonants = contarConsonantes(text);
    int noAlphabetical = contarNoAlfabeticos(text);

    cout << "Vocales: " << vowels << endl;
    cout << "Consonantes: " << consonants << endl;
    cout << "No alfabeticos: " << noAlphabetical << endl;
}

int main() {
    analyzeText();
    return 0;
}

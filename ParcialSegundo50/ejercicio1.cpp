#include <iostream>
#include <string>
using namespace std;

void wordsCounter() {

    string sentence;
    string word;
    string longWord;

    cout << "Escriba su frase: ";
    getline(cin, sentence);

    int wordCounter = 0;

    for (int i = 0; i <= sentence.size(); i++) {
        if (i == sentence.size() || sentence[i] == ' ') {
            if (!word.empty()) {
                wordCounter++;

                if (word.size() > longWord.size()) {
                    longWord = word;
                }
                word = ""; 
            }
        } else {
            word += sentence[i];
        }
    }

    cout << "La frase: " << sentence << " ,contiene:" << endl;
    cout << " - Cantidad de palabras: " << wordCounter << endl;
    cout << " - La palabra mas larga es: " << longWord << endl;
}

int main() {
    wordsCounter();
    return 0;
}

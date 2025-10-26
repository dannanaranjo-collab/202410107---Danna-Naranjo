#include <iostream>
using namespace std;

void removeVowels() {
    string word = "Hola mundoooooo! Soy Sofia Naranjo";
    for (size_t i = 0; i < word.size(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            cout << "";
        } else {
            cout << word[i];
        }
    }
}

int main() {
    removeVowels();
    return 0;
}
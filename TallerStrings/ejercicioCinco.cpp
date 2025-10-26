#include <iostream>
using namespace std;

bool palindrome (string text) {
    for (int i = 0, j = text.size() - 1; i < j; i++, j--) {
        if (text [i] != text[j]) {
            return false;
        }
    }
    return true;
}

void verifyPalindrome() {
    string wordOne, wordTwo;

    cout << "Ingrese la primera palabra: ";
    cin >> wordOne;
    cout << "Ingrese la segunda palabra: ";
    cin >> wordTwo;

    if (palindrome(wordOne)) {
        cout << wordOne << " es un palindromo" << endl;
    } else {
        cout << wordOne << " no es un palindromo" << endl;
    }

    if (palindrome(wordTwo)) {
        cout << wordTwo << " es un palindromo" << endl;
    } else {
        cout << wordTwo << " no es un palindromo" << endl;
    }
}

int main() {
    verifyPalindrome();
    return 0;
}
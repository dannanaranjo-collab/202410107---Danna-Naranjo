#include <iostream>
using namespace std;

void lettersCounter (){

    string word = "Hola mundoteeee, soy Sofia y estoy programandoooo, chao.";
    int counter = 0;

    for (int i = 0; i < word.size (); i++) {
        if (word[i] != ' ') {
            counter++; 
        }
    }
    
    cout << "La frase : " << word << endl;
    cout << "Tiene : " << endl; 
    cout << "- Cantidad de caracteres (con espacios): " << word.size ()<< endl;
    cout << "- Cantidad de caracteres (sin espacios): " << counter << endl;
}

int main() {
    lettersCounter();
    return 0;
}
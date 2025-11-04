#include <iostream>
using namespace std;

void lettersCounter (){
    string text = "Hola mundoteee, soy Sofia y estoy programando, chao"; 
    int vowelsCounter = 0;
    int consonantsCounter = 0;

    for (int i = 0; i < text.size(); i ++) {
    
    if (text [i] == 'a' || text [i] == 'e' || text[i]  == 'i' || text[i]  == 'o' || text[i]  == 'u' ||
    text[i]  == 'A'|| text[i]  == 'E' || text[i]  == 'I' || text[i]  == 'O' || text[i]  == 'U')
    {
        vowelsCounter++; 
    }
    else if (text [i]!='a' && text [i] != 'e' && text[i]  != 'i' && text[i]  != 'o' && text[i]  != 'u' &&
    text[i]  != 'A'&& text[i]  != 'E' && text[i]  != 'I' && text[i]  != 'O' && text[i]  != 'U' && text[i] !=' ')
    {
        consonantsCounter++; 
    }
     
    }
    cout << "La frase : " << text<< endl;
    cout << "Tiene : " << endl; 
    cout << "- Cantidad de vocales: " <<vowelsCounter << endl;
    cout << "- Cantidad de consonantes: " << consonantsCounter << endl;
}

int main (){
    lettersCounter ();
    return 0;
}
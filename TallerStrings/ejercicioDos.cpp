#include <iostream>
using namespace std;

void changeLetter(){
    string word;
    cout << "Ingrese una palabra: ";
    cin >> word; 

    int rest = 'a' - 'A'; 

    for(int i = 0; i < word.size(); i++){

        if(i % 2 == 0 && word[i] >= 'a' && word[i] <= 'z'){
            word[i] = word[i] - rest; 

        }else if(i % 2 != 0 && word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = word[i] + rest; 
        }
    }

    cout << word<< endl;
}

int main(){
    changeLetter();
    return 0;
}

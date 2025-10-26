#include <iostream>
using namespace std;

void analyzeCode() {
    string code;
    cout << "Ingrese el codigo (ejemplo A12-BX9-Z): ";
    cin >> code;

    int guiones = 0;
    int digitos = 0;
    bool terminaMayus = false;

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '-') {
            guiones++;
        }
        if (code[i] >= '0' && code[i] <= '9') {
            digitos++;
        }
    }

    char ultima = code[code.size() - 1];
    if (ultima >= 'A' && ultima <= 'Z') {
        terminaMayus = true;
    }

    cout << "Cantidad de guiones: " << guiones << endl;
    cout << "Cantidad de digitos: " << digitos << endl;

    if (terminaMayus) {
        cout << "El codigo termina con mayuscula." << endl;
    } else {
        cout << "El codigo NO termina con mayuscula." << endl;
    }
}

int main() {
    analyzeCode();
    return 0;
}

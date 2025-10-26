#include <iostream>
using namespace std;

bool tieneDigito(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.size(); i++) {
        if (isdigit(codigoAcceso[i])) {
            return true;
        }
    }
    return false;
}

bool tieneSimboloEspecial(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.size(); i++) {
        if (codigoAcceso[i] == '@' || codigoAcceso[i] == '#' || codigoAcceso[i] == '$' || codigoAcceso[i] == '%') {
            return true;
        }
    }
    return false;
}

bool sinEspacios(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.size(); i++) {
        if (codigoAcceso[i] == ' ') {
            return false;
        }
    }
    return true;
}

void codeValid() {
    string code;

    cout << "Ingrese el codigo de acceso: ";
    getline(cin, code);

    bool number = tieneDigito(code);
    bool symbol = tieneSimboloEspecial(code);
    bool noSpace = sinEspacios(code);

    if (number && symbol && noSpace) {
        cout << "Codigo de acceso valido" << endl;
    } else {
        cout << "Codigo de acceso invalido:" << endl;
        if (!number) {
            cout << "No contiene ningun digito" << endl;
        }
        if (!symbol) {
            cout << "No contiene simbolos especiales (@, #, $, %)" << endl;
        }
        if (!noSpace) {
            cout << "Contiene espacios" << endl;
        }
    }
}

int main() {
    codeValid();
    return 0;
}

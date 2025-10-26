#include <iostream>
using namespace std;

bool validarLongitud(string nombreUsuario) {
    return (nombreUsuario.size() >= 6 && nombreUsuario.size() <= 12);
}

bool validarInicioLetra(string nombreUsuario) {
    char c = nombreUsuario[0];
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return true;
    }
    return false;
}

bool validarSinEspacios(string nombreUsuario)
{
    for (int i = 0; i < nombreUsuario.size(); i++) 
    {
        if (nombreUsuario[i] == 32)
        {
            return false;
        }
    }
    return true;
}


void userVerify() {
    string user;
    cout << "Escriba su nombre de usuario: ";
    cin >> user;

    bool large = validarLongitud(user);
    bool letterStart = validarInicioLetra(user);
    bool noSpace = validarSinEspacios(user);

    if (large && letterStart && noSpace) {
        cout << "Nombre de usuario valido" << endl;
    } else {
        cout << "No cumple las condiciones:" << endl;
        if (!large)
            cout << "Debe tener entre 6 y 12 caracteres." << endl;
        if (!letterStart)
            cout << "Debe empezar con una letra." << endl;
        if (!noSpace)
            cout << "No debe tener espacios." << endl;
    }
}

int main() {
    userVerify();
    return 0;
}

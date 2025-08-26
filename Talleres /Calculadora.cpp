#include <iostream>

using namespace std;

int main() {

    int value1, value2, result, option;

    cout << "Elige una opción: "<< endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cin >> option;

    cout << "Ingresa el primer valor: ";
    cin >> value1;
    cout << "Ingresa el segundo valor: ";
    cin >> value2;

    if (option == 1) {
        result = value1 + value2;
        cout << "El resultado de la suma es: " << result << endl;
    }
    if (option == 2) {
        result = value1 - value2;
        cout << "El resultado de la resta es: " << result << endl;
    }
    if (option == 3) {
        result = value1 * value2;
        cout << "El resultado de la multiplicacion es: " << result << endl;
    }
    if (option == 4) {
        if (value2 != 0) {
            result = value1 / value2;
            cout << "El resultado de la division es: " << result << endl;
        } else {
            cout << "Error: no se puede dividir entre cero." << endl;
        }
    }
    if (option < 1 || option > 4) {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}



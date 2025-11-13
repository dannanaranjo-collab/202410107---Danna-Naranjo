#include <iostream>
using namespace std;

// Opcion 1 : Registrar ventas
void getNewSales(string *&names, int *&values, int &sales) {
    cout << "Ingrese el numero de ventas a registrar: ";
    cin >> sales;

    names = new string[sales];
    values = new int[sales];

    for (int i = 0; i < sales; i++) {
        cout << "Venta " << i + 1 << " - Nombre: ";
        cin >> names[i];
        cout << "Valor: ";
        cin >> values[i];
    }
}

// Opcion 2 : Mostrar ventas
void printSales(string *names, int *values, int sales) {
    if (sales == 0) {
        cout << "No se han registrado ventas :(";
    }
    cout << "Lista actual de ventas:";
    for (int i = 0; i < sales; i++) {
        cout << "Venta: " << names[i] << " - Valor: " << values[i] << endl;
    }
}

// Opcion 3 : Modificar una venta
void modifySale(string *names, int *values, int sales) {
    string search;
    if (sales == 0) {
        cout << "No hay ventas para modificar"<<endl;
    }

    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> search;

    for (int i = 0; i < sales; i++) {
        if (names[i] == search) {
            cout << "Valor actual: " << values[i] << endl;
            cout << "Ingrese el nuevo valor: ";
            cin >> values[i];
            cout << "Venta modificada correctamente :)"<<endl;
        }
    }
    cout << "No se encontro una venta con ese nombre"<<endl;
}

// Opcion 4 : Buscar una venta por nombre
void findSale(string *names, int *values, int sales) {
    
    string search;

    if (sales == 0) {
        cout << "No hay ventas registradas"<<endl;
    }

    cout << "Ingrese el nombre de la venta : ";
    cin >> search;

    for (int i = 0; i < sales; i++) {
        if (names[i] == search) {
            cout << "Venta encontrada : " << names[i] << " = " << values[i] << endl;
        }
    }
    cout << "No hay ventas con ese nombre"<<endl;
}

// Opcion 5 : Mostrar ventas dentro de un rango
void salesInRange(string *names, int *values, int sales) {

    int min, max;

    if (sales == 0) {
        cout << "No hay ventas registradas"<<endl;
    }


    cout << "Ingrese el valor minimo: ";
    cin >> min;
    cout << "Ingrese el valor maximo: ";
    cin >> max;

    cout << "Ventas dentro del rango  = [" << min << ", " << max << "]:"<<endl;
    bool found = false;

    for (int i = 0; i < sales; i++) {
        if (values[i] >= min && values[i] <= max) {
            cout << names[i] << " = " << values[i] << endl;
            found = true;
        }
    }

    if (!found) cout << "No hay ventas en ese rango"<<endl;
}

// Opcion 6 : Calcular total
void calculateTotal(int *values, int sales) {
    if (sales == 0) {
        cout << "No hay ventas registradas"<<endl;
    }

    int total = 0;
    for (int i = 0; i < sales; i++) total += values[i];

    cout << "El total de todas las ventas es: " << total << endl;
}

// FUNCION PRINCIPAL 
void run() {
    string *names = nullptr;
    int *values = nullptr;
    int sales = 0;
    int option;

    do {
        cout << "Seleccione una opcion: "<<endl;
        cout << "1. Registrar o reiniciar ventas"<<endl;
        cout << "2. Mostrar todas las ventas"<<endl;
        cout << "3. Modificar una venta"<<endl;
        cout << "4. Buscar una venta"<<endl;
        cout << "5. Mostrar ventas dentro de un rango de precios"<<endl;
        cout << "6. Calcular total de ventas"<<endl;
        cout << "7. Salir"<<endl;
        cout << "Ingrese una opcion: "<<endl;
        cin >> option;
        
        switch (option) {
            case 1:
                delete[] names;
                delete[] values;
                getNewSales(names, values, sales);
                break;
            case 2:
                printSales(names, values, sales);
                break;
            case 3:
                modifySale(names, values, sales);
                break;
            case 4:
                findSale(names, values, sales);
                break;
            case 5:
                salesInRange(names, values, sales);
                break;
            case 6:
                calculateTotal(values, sales);
                break;
            case 7:
                cout << "Saliendo :)"<<endl;
                break;
            default:
                cout << "Opcion invalida, por favor vuelva a intentar :( ";
        }
    } while (option != 7);

    delete[] names;
    delete[] values;
}

int main() {
    run();
    return 0;
}


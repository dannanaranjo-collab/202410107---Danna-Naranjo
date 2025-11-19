#include<iostream>
using namespace std;

class IntOfArrayManager{

    public: 
    string* names; 
    int* weights= 0;
    int size = 0;
    bool* delivered; 


bool validateName(string name){

    if (name.size() == 0) return false;

    if (!isalpha(name[0])) {
        cout << "El nombre debe iniciar con una letra"<<endl;
    }

    for (char c : name) {
        if (c == ' ') {
            cout << "El nombre no debe contener espacios"<<endl;
        }
    }

    bool hasNumber = false;
    for (char c : name)
        if (isdigit(c))
            hasNumber = true;

    if (!hasNumber) {
        cout << "El nombre debe tener al menos un numero"<<endl;
    }

    return true;
}

void getNewPackages (){
     
    cout << "Cuantos paquetes desea registrar? ";
    cin >> size;

    names = new string[size];
    weights = new int[size];
    delivered = new bool[size];

    for (int i = 0; i < size; ++i) {

        string name;

        do {
            cout << "Nombre del paquete #" << i+1 << ": "<<endl;
            cin >> name; 
        } while (!validateName(name));
        
        names[i] = name;

        cout << "Peso del paquete #" << i+1 << ": "<<endl;
        cin >> weights[i];

        cout << "Estado (0=Entregado, 1=Pendiente): "<<endl;
        int state;
        cin >> state;
        delivered[i] = (state == 1);
    }
}



void showPackages (){

    if (size == 0) {
        cout << "No se encuentran paquetes registrados";
    }

    for (int i = 0; i < size; i++) {
        cout << i + 1 << " - " << names[i]
             << " -> " << weights[i] << " kg -> "
             << (delivered[i] ? "Pendiente" : "Entregado") << endl;
    }
}

void modifyPackages(){
    
    int modify;
    string newName;
    int state;

    if (size == 0) {
        cout << "No se encuentran paquetes registrados"<<endl;
    }

    cout << "Numero del paquete a modificar (1-" << size << "): "<<endl;
    cin >> modify;
    modify--;

    if (modify < 0 || modify >= size) {
        cout << "No valido";
    }

    do {
        cout << "Nuevo nombre: ";
        cin >> newName;
    } while (!validateName(newName));

    names[modify] = newName;

    cout << "Nuevo peso: ";
    cin >> weights[modify];

    cout << "Nuevo estado (0=Entregado, 1=Pendiente): "<<endl;
    cin >> state;
    delivered[modify] = (state == 1);

    cout << "Paquete modificado correctamente"<<endl;
}

void findPackages (){

    int option; 

    if (size == 0) {
        cout << "No se encuentran paquetes registrados";
    }

    cout << "Que estado desea ver?"<<endl;
    cout << "1. Pendientes"<<endl;
    cout << "2. Entregados";
    cin >> option;

    switch (option) {
        case 1:
            for (int i = 0; i < size; i++)
                if (delivered[i])
                    cout << names[i] << " - " << weights[i] << " kg - Pendiente";
            break;

        case 2:
            for (int i = 0; i < size; i++)
                if (!delivered[i])
                    cout << names[i] << " - " << weights[i] << " kg - Entregado";
            break;

        default:
            cout << "Opcion no valida";
    }
}

void run() {

    int option;

    do {
        cout << "Seleccione una opcion: "<<endl;
        cout << "1. Iniciar o registrar paquetes"<<endl;
        cout << "2. Mostrar paquetes"<<endl;
        cout << "3. Modificar paquetes"<<endl;
        cout << "4. Ver paquetes entregados o pendientes"<<endl;
        cout << "5. Salir"<<endl;
        cout << "Ingrese una opcion: "; 
        cin >> option;
        
        switch (option) {
            case 1:
                getNewPackages();
                break;
            case 2:
                showPackages();
                break;
            case 3:
                modifyPackages();
                break;
            case 4:
                findPackages();
                break;
            case 5:
                cout << "Saliendo...";
                break;

            default:
                cout << "Opcion invalida";
        }
    } while (option != 5);

    delete[] names;
    delete[] weights;
    delete[] delivered;
}
};

int main() {
    IntOfArrayManager arrayManager;
    arrayManager.run();
    return 0;
}

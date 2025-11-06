#include <iostream>
using namespace std;

void multas (){

    string city; 
    float total; 
    char multa; 

    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};

    cout<<"Ingrese su ciudad: "; 
    cin>>city; 

    for (int i = 0; i < 6; i++) {
        if (ciudades[i] == city) {
            cout << placas[i] << " - " << multas[i] << endl;
        }
    }

    if (multas) {
        cout << "Total multas en " << city << ":" << total << endl;
    } else {
        cout << "No hay multas en:  " << city << endl;
    }

    cout << "Multas en: " << city << ":" << endl;
}

int main() {
    multas();
    return 0;
}

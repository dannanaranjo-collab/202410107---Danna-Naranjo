#include <iostream>
using namespace std;

void citiesTemperature (){

    float maxTemperature;
    float minTemperature;

    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga", 
        "Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

        float sum = 0;
        int counter = 0; 

    cout<< "Ingrese la temperatura maxima: "<<endl;
    cin>>maxTemperature;
    cout<<"Ingrese la temperatura minima"<<endl; 
    cin>>minTemperature; 

for (int i = 0; i < 10; ++i) {
        if (minTemperature<= temperaturas[i] && temperaturas[i] <= maxTemperature) {
            cout << ciudades[i] << "- " << temperaturas[i]<< endl;
            sum += temperaturas[i];
            ++counter;
        }
    }
    
if (counter) {
        cout << "Temperatura promedio de las ciudades en el rango: " 
    }
}

int main() {
   citiesTemperature();
    return 0;
}


    








}

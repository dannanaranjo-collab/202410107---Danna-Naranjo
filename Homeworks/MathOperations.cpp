#include <iostream>
using namespace std;

int main() {
    string userName;
    string userPet;
    int userNumber;
    int userPetYears;

    cout << "Ingrese su nombre: ";
    cin >> userName;

    cout << "Ingrese su edad: ";
    cin >> userNumber;

    cout << "Ingrese el nombre de su mascota: ";
    cin >> userPet;

    cout << "Ingrese la edad de su mascota: ";
    cin >> userPetYears;

    cout << "¡Bienvenid@! " << userName << endl;
    cout << "Usted tiene:" << userNumber << " años." << endl;
    cout << "Su mascota " << userPet << " , tiene: " << userPetYears << " años." << endl;

    cout << endl; 
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

void names (){
    string textArray [5] = {"Juan","Sofi","Osman","Diego","Daniel"};
    for (int i = 0; i<5; i++)
    {
        cout << "El nombre del empleado es: ";
        string arrayValue = textArray [i];
        cout<<arrayValue<< endl;
    }
}

int main (){
    names ();
    return 0;
}
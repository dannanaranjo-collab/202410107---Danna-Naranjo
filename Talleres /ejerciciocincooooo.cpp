#include <iostream>
using namespace std;
void showAdults()
{
    string names[5] = {"Carlos", "Marta", "Lucia", "Tomas", "Sofia"};
    int ages[5] = {20, 16, 22, 15, 19};

    cout << "mayores de edad:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        if (ages[i] >= 18) 
        {
            cout << "Nombre: " << names[i] << ", Edad: " << ages[i] << endl;
        }
    }
}
int main()
{
    showAdults();
    return 0;
}
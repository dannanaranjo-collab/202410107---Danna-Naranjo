#include <iostream>
using namespace std;

bool longitudMinima(string password)
{
    return password.length() >= 8;
}

bool correctaPassword(string password)
{
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; i < password.length(); i++)
    {
        if (isupper(password[i]))
            hasUpper = true;
        else if (islower(password[i]))
            hasLower = true;
        else if (isdigit(password[i]))
            hasDigit = true;
        else if (password[i] >= 33 && password[i] <= 47) 
            hasSpecial = true;
    }
    return hasUpper && hasLower && hasDigit && hasSpecial && longitudMinima(password);
}

int main()
{
    string password;
    cout << "Ingrese una contraseña: ";
    cin >> password;

    if (correctaPassword(password))
        cout << "Contraseña segura " << endl;
    else
        cout << "Contraseña insegura " << endl;

    return 0;
}
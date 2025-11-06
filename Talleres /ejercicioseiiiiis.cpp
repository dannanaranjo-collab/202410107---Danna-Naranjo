#include <iostream>
using namespace std;

void showProductsAndFilter()
{
    string products[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float prices[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    float totalToPay = 0;

    cout << "Lista de productos y precios:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Las " << products[i] << " cuestan " << prices[i] << endl;
        totalToPay = totalToPay + prices[i];
    }

    cout << "Total a pagar : " << totalToPay << endl;

    cout << "Productos con precio mayor o igual a 2500:" << endl;
    for (int i = 0; i < 6; i++)
    {
        if (prices[i] >= 2500)
        {
            cout << "Producto: " << products[i] << " - Precio: " << prices[i] << endl;
        }
    }
}

int main()
{
    showProductsAndFilter();
    return 0;
}
#include <iostream>
using namespace std;
void prices()
{
    float prices[5] = {13000, , 12000, 11500, 11700};
    float totalSum = 0;
    float highPrice = prices[0];
    float lowPrice = prices[0];

    for (int i = 0; i < 5; i++) 
    {
        totalSum += prices[i];

        if (prices[i] > highPrice) 
        {
            highPrice = prices[i];
        }

        if (prices[i] < lowPrice) 
        {
            lowPrice = prices[i];
        }
    }
 cout << "Suma total: " << totalSum << endl;
    cout << "Precio mas alto: " << highPrice << endl;
    cout << "Precio mas bajo: " << lowPrice << endl;
}
int main()
{
    prices();
    return 0;
}
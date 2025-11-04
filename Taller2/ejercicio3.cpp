#include <iostream>
using namespace std;

void averageAges (){
    int ages [5] = {12,12,19,20,15};
    int sum = 0;

    for (int i = 0; i<5; i++)
    {
        cout <<ages[i] << ", ";
        sum += ages[i];
    }

    float average  = (float)sum / 5;

    cout << "Edad promedio: " << average << endl;
}

int main() {
    averageAges();
    return 0;
}    

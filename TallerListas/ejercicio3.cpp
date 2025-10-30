#include <iostream>
using namespace std;

void maxValue (){
    int numbers [7]= {3,5,7,3,4,8,9};
    int maxValue = 0;

    for (int i = 0; i<7; i++){

     if (numbers [i]>maxValue)
     {
        maxValue = numbers [i];
     }
    }

    cout << "El número más alto es: "<< maxValue<< endl; 

}

int main (){
    maxValue();
    return 0;
}
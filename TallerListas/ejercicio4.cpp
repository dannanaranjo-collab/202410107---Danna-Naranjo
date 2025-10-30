#include <iostream>
using namespace std;

void evenNumbers (){
    int values [10]= {1,2,3,4,5,6,7,8,9,10};
    int numbersCounter = 0;

    for (int i = 0; i<10; i++){

     if (values [i]%2 == 0)
     {
        numbersCounter++; 
     }
    }

    cout << "Hay "<< numbersCounter<< " numeros pares"<<endl; 

}

int main (){
    evenNumbers();
    return 0;
}

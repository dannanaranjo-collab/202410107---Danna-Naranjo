#include <iostream>
using namespace std;

void productsPrices (){
    string products [5]={"canela","chocolate","maíz pira","pan hojaldrado","queso pera" };
    float prices [5]= {500,2000,3500,300,5700};
    
    cout << "Los precios de nuestra tienda son: "<< endl; 
    for (int i = 0; i<5; i++){
        cout<< products[i] << " =  "<< prices [i]<<endl;
    }
    
}

int main (){
    productsPrices ();
    return 0;
}
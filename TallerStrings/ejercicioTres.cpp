# include <iostream>
using namespace std;

void commonLetters(){
    string wordOne, wordTwo;
    cout << "Ingrese la primera palabra:" << endl;
    cin >> wordOne;
    cout << "Ingrese la segunda palabra:" << endl;
    cin >> wordTwo;

    int counter = 0;
    for (size_t i = 0; i < wordOne.size(); i++)
    {
        for (size_t j = 0; j < wordTwo.size(); j++)
        {
            if (wordOne[i] == wordTwo[j])
            {
                counter++;
            }
            
        }
        
    }
    cout << "Hay " << counter << " letra(s) en comun" ;
    
}
int main(){
    commonLetters();
}
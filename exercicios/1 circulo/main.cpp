#include <iostream>
#include "Circulo.hpp"
using namespace std;

int main(){
    float raio = 0.0f;
    cout << "digite o raio do círculo: ";
    cin >> raio;
    Circulo circulo(raio);
    
    cout << "dados do circulo de raio " << raio << " :" << endl
         << "Area: " << circulo.area() << endl
         << "Perimetro: " << circulo.perimetro() << endl;
    
}
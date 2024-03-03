#include "Triangulo.hpp"
#include <iostream>
using namespace std;

int main(){
    Triangulo tri(8, 3, 10);

    cout << "semi-perimetro " << tri.get_semi_perimetro() << endl;
    cout << "triangulo possivel ? " << tri.triangulo_possivel() << endl;


}
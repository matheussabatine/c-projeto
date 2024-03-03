#include "Triangulo.hpp"
#include <iostream>
using namespace std;

int main(){
    Triangulo tri(12, 19, 8);

    cout << "semi-perimetro " << tri.get_semi_perimetro() << " Metros." <<endl;
    cout << "triangulo possivel ? " << tri.triangulo_possivel() << endl;
    cout << "area " << tri.get_area() << " Metros." <<endl;


}
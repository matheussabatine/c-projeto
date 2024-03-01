#include <iostream>
#include "Retangulo.hpp"

int main(){
    Retangulo retangulo(20, 40);
    std::cout << "area: " << retangulo.area() << std::endl
              << "perimetro: " << retangulo.perimetro() << std::endl;
}
#include "Circulo.hpp"

Circulo::Circulo(float raio):
raio(raio)

{
}

Circulo::~Circulo()
{
}

float Circulo::area(){
    //pi r*r
    return pi*(raio*raio);

}
float Circulo::perimetro(){
    //2*pi r
    return raio*(pi*2);
}
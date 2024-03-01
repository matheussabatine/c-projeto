#include "Retangulo.hpp"

Retangulo::Retangulo(float largura, float altura):
largura(largura),
altura(altura)
{
}

Retangulo::~Retangulo()
{
}

float Retangulo::area(){
    return largura*altura;

}

float Retangulo::perimetro(){
    return (largura*2)+(altura*2);

}

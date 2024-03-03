#include "Triangulo.hpp"

Triangulo::Triangulo(float a, float b, float c):
a(a),
b(b),
c(c)
{

}

Triangulo::~Triangulo()
{
}


float Triangulo::get_semi_perimetro(){
    return (a + b + c)/2;

}

//area = raiz quadrada de (semi-perimetro*(sp - a)*(sp - b)*(sp - c))
float Triangulo::get_area(){
    float peri = get_semi_perimetro();
    float equacao =  peri*(peri - a)*(peri - b)*(peri - c);
    return sqrt(equacao);

}
//para que um triangulo seja possivel, a soma de seus dois menores lados deve ser maior que o maior lado
std::string Triangulo::triangulo_possivel(){
    float menor_1;
    float menor_2;
    float maior;
    if (a > b)
    {
        menor_1 = b;
        if (a > c){
            menor_2 = c;
            maior = a;
        }
        else{
            menor_2 = a;
            maior = c;
        }
    }
    else{
        menor_1 = a;
        if (b > c){
            menor_2 = c;
            maior = b;
        }
        else{
            menor_2 = b;
            maior = c;
        }
    }

    if((menor_1 + menor_2) > maior){
        return "existe";
    }
    else{
        return "impossivel existir";
    }
    
   
}

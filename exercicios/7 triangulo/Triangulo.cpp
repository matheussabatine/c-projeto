#include "Triangulo.hpp"

Triangulo::Triangulo(float a, float b, float c):
a(a),
b(b),
c(c)
{
    calcular_semi_perimetro();
}

Triangulo::~Triangulo()
{
}

void Triangulo::calcular_semi_perimetro(){
    semi_perimetro = (a + b + c)/2;

}

float Triangulo::get_semi_perimetro(){
    return semi_perimetro;

}
//para que um triangulo seja possivel, a soma de seus dois menores lados deve ser maior que o maior lado
bool Triangulo::triangulo_possivel(){
    std::array<float, 3> lados= {a, b, c};
    int tamanho = lados.size();
    float maior = lados[0];
    float total;

    for(int i = 0; i <= tamanho; i++){
        total += lados[i];
        if (maior < lados[i])
        {
            maior = lados[i];
        }
    }
    if(total - maior > maior){
        return true;
    }
    else{
        return false;
    }
}

#include <string>
#include <array>

class Triangulo
{
private:
    float a;
    float b; 
    float c;
    float semi_perimetro;
public:
    Triangulo(float a, float b, float c);
    ~Triangulo();
    void calcular_semi_perimetro();
    float get_semi_perimetro();
    bool triangulo_possivel();
};


#include <string>
#include <array>
#include <cmath>

class Triangulo
{
private:
    float a;
    float b; 
    float c;

public:
    Triangulo(float a, float b, float c);
    ~Triangulo();
    float get_semi_perimetro();
    float get_area();
    std::string triangulo_possivel();
};


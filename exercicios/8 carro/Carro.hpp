#include <string>
#include <iostream>

class Carro
{
private:
    std::string marca = "aa";
    std::string modelo = "dd";
    unsigned int vel_atual = 0;
public:
    Carro();
    ~Carro();
    void cadastrar_dados();
    std::string get_marca();
    std::string get_modelo();
    int get_vel_atual();
    void acelerar();
    void frear();

};



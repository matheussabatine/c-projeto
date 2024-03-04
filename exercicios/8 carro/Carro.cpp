#include "Carro.hpp"

Carro::Carro()
{
    cadastrar_dados();
}

Carro::~Carro()
{
}

void Carro::cadastrar_dados(){
    std::cout << "bem-vindo, digite a marca do carro: ";
    std::cin >> marca;

    std::cout << "digite o modelo do carro: ";
    std::cin >> modelo;

}

std::string Carro::get_marca(){
    return marca;

}

std::string Carro::get_modelo(){
    return modelo;
    
}

int Carro::get_vel_atual(){
    return vel_atual;
}

void Carro::acelerar(){
    vel_atual += 10;

}

void Carro::frear(){
    if(vel_atual >= 10){
        vel_atual -= 10;
    }
}
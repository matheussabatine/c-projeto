#include "Conta.hpp"

Conta::Conta(int numero_conta, std::string titular):
numero_conta(numero_conta),
titular(titular)
{

}

Conta::~Conta(){
    
}

float Conta::get_saldo(){
    return saldo;

}

void Conta::sacar_saldo( float sacar){
    if(sacar > saldo){
        std::cout << "saldo insuficiente";
    }
    else{
        saldo -= sacar;
    }

}

void Conta::depositar_saldo(float depositar){
    saldo += depositar;

}
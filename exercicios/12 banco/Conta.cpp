#include "Conta.hpp"

Conta::Conta(std::string nome, std::string cpf, int num_conta):
Pessoa(nome, cpf),
num_conta(num_conta)
{
}

Conta::~Conta()
{
}

float Conta::get_saldo(){
    return saldo;
}

void Conta::Sacar(float valor){
    if(valor <= saldo){
        saldo -= valor;

    }


}
void Conta::Depositar(float valor){
     saldo += valor;

}

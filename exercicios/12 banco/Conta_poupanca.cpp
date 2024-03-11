#include "Conta_poupanca.hpp"

Conta_poupanca::Conta_poupanca(std::string nome, std::string cpf, int num_conta):
Conta(nome, cpf, num_conta)
{
}

Conta_poupanca::~Conta_poupanca()
{
}

std::string Conta_poupanca::tipo(){
    return "CONTA POUPANCA";
}
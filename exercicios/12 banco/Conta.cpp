#include "Conta.hpp"

Conta::Conta(int num_conta, std::string nome, int CPF):
Cliente(nome, CPF),
num_conta(num_conta)
{
}

Conta::~Conta()
{
}

std:: string Conta::get_nome(){
    return nome;
}
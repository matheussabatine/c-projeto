#include "Cliente.hpp"

Cliente::Cliente(std::string nome, int CPF):
nome(nome),
CPF(CPF)
{
}

Cliente::~Cliente()
{
}

std::string Cliente::get_nome(){
    return nome;
}

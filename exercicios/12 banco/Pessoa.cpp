#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome, std::string cpf):
nome(nome),
cpf(cpf)
{
}

Pessoa::~Pessoa()
{
}

std::string Pessoa::get_nome(){
    return nome;

}
std::string Pessoa::get_cpf(){
    return cpf;

}
#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome, std::string profissao, int idade):
nome(nome),
profissao(profissao),
idade(idade)
{
}

Pessoa::~Pessoa()
{
}

void Pessoa::get_dados(){
    std::cout << "nome : " << nome << std::endl;
    std::cout << "profissao : " << profissao << std::endl;

}

int Pessoa::calcular_idade(){
    return idade/4;
}
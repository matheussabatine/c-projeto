#include <iostream>
#include <string>
#include "Identidade.hpp"


Identidade::Identidade(std::string nome, Cpf cpf, int idade):
nome(nome),
cpf(cpf),
idade(idade)
{
}

Identidade::~Identidade()
{
}

void Identidade::get_identidade()
{
    std::cout << "nome: " << nome << std:: endl
              << "CPF: " << cpf.get_Cpf() << std:: endl
              << "idade: " << idade << std:: endl;
}

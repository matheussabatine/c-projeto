#pragma once
#include <string>

class Pessoa
{
protected:
    std::string nome;
    std::string cpf;
public:
    Pessoa(std::string nome, std::string cpf);
    ~Pessoa();
    std::string get_nome();
    std::string get_cpf();
};



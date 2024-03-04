#pragma once
#include <string>

class Cliente
{
protected:
    std::string nome;
    int CPF;
public:
    Cliente(std::string nome, int CPF);
    ~Cliente();
    std::string get_nome();
};


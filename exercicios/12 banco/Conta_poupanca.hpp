#pragma once

#include <string>
#include "Conta.hpp"

class Conta_poupanca : public Conta
{
private:
    /* data */
public:
    Conta_poupanca(std::string nome, std::string cpf, int num_conta);
    ~Conta_poupanca();
    std::string tipo() override;
};


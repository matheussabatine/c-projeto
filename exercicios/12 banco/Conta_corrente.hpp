#pragma once

#include <string>
#include "Conta.hpp"

class Conta_corrente : public Conta
{
private:
    /* data */
public:
    Conta_corrente(std::string nome, std::string cpf, int num_conta);
    ~Conta_corrente();
    std::string tipo() override;
    void Tranferir(Conta &conta, float valor);


};


#pragma once
#include "Pessoa.hpp"

#include <string>

class Conta : public Pessoa
{
private:
    int num_conta;
    float saldo = 0;
public:
    Conta(std::string nome, std::string cpf, int num_conta);
    ~Conta();
    float get_saldo();
    void Sacar(float valor);
    void Depositar(float valor);
    virtual std::string tipo() = 0;

};


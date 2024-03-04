#include "Cliente.hpp"

class Conta : public Cliente
{
private:
    int num_conta;
    float saldo = 0;
public:
    Conta(int num_conta, std::string nome, int CPF);
    ~Conta();
    std::string get_nome();
};



#include <string>
#include <iostream>

class Conta
{
private:
    int numero_conta;
    std::string titular;
    float saldo = 0;
public:
    Conta(int numero_conta, std::string titular);
    ~Conta();
    float get_saldo();
    void sacar_saldo(float sacar);
    void depositar_saldo(float depositar);
};


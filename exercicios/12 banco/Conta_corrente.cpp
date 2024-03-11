#include "Conta_corrente.hpp"

Conta_corrente::Conta_corrente(std::string nome, std::string cpf, int num_conta):
Conta(nome, cpf, num_conta)
{
}

Conta_corrente::~Conta_corrente()
{
}

std::string Conta_corrente::tipo(){
    return "CONTA CORRENTE";
}

void Conta_corrente::Tranferir(Conta &conta, float valor){
    this->Sacar(valor);
    conta.Depositar(valor);
}
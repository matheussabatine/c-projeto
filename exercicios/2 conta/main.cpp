#include "Conta.hpp"
#include <iostream>

int main(){

    Conta conta(1, "Garcia junior");
    conta.depositar_saldo(300);
    conta.sacar_saldo(25);
    std::cout << conta.get_saldo();
    return 0;
}
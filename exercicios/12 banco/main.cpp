#include <iostream>

#include "Conta.hpp"
#include "Cliente.hpp"

int main(){

    Conta conta(001, "matheus", 123456);
    std::cout << conta.get_nome();
    
    return 0;
}
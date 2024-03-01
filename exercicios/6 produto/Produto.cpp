#include "Produto.hpp"

Produto::Produto(std::string nome, float valor):
nome(nome),
valor(valor)
{
}

Produto::~Produto()
{
}

float Produto::valor_estoque(){
    return valor*quantidade;
}

int Produto::verificar_estoque(){
    return quantidade;
}

void Produto::comprar_estoque(int estoque){
    quantidade += estoque;
    

}

void Produto::vender_estoque(int estoque){
    if(quantidade < estoque){
        std::cout << "estoque insufuciente" << std::endl;
    }
    else{
        quantidade -= estoque;
    }

}


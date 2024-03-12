#include "Camisa.hpp"

Camisa::Camisa(std::string nome, float preco, char tamanho, std::string cor): 
Produto(nome, preco),
tamanho(tamanho),
cor(cor)
{
}

Camisa::~Camisa()
{
}

std::string Camisa::categoria(){
    return "CAMISA";
}

#include "Produto.hpp"

Produto::Produto(std::string nome, float preco):
nome(nome),
preco(preco)
{
}

Produto::~Produto()
{
}

std::string Produto::get_nome(){
    return nome;

}

float Produto::get_preco(){
    return preco;

}

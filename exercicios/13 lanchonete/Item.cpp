#include "Item.hpp"

Item::Item(std::string nome, float preco, std::string validade, float peso):
nome(nome),
preco(preco),
validade(validade),
peso(peso)
{
}

Item::~Item()
{
}

float Item::get_preco(){
    return preco;

}

std::string Item::get_nome(){
    return nome;
}

#include "Item.hpp"

Item::Item(float preco, std::string validade, float peso):
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

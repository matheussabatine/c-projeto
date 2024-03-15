#include "Pedido.hpp"

Pedido::Pedido(std::string cliente, float taxa_servico)
{
}

Pedido::~Pedido()
{
}

void Pedido::acrescentar_item(std::string item, std::string quantidade){
    std::string item_pedido = quantidade + ">" + item;
    itens.push_back(item_pedido);

}

std::string Pedido::get_itens(){
    return itens[0];
} 
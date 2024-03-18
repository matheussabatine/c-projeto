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
    int pos = itens[0].find(">");
    return itens[0].substr(0, pos);
} 

void Pedido::fechar_pedido(){
    std::string delimitador = ">";

    std::cout << "Itens do Pedido:" << std::endl;

    for(int i = 0; i <= itens.size() - 1; i++){
        int pos = itens[i].find(delimitador);

        std::string parte_1 = itens[i].substr(0, pos);
        int quantidade = stoi(parte_1);

        std::string parte_2 = itens[i].substr(pos+1);

        std::cout << parte_1 << "x..." << parte_2 << std::endl;
    }
}
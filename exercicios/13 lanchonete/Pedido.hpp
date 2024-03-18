#include "Item.hpp"
#include <vector>
#include <string>
#include <iostream>

class Pedido
{
private:
    std::string cliente;
    float taxa_servico;
    std::vector <std::string> itens; 
public:
    Pedido(std::string cliente, float taxa_servico);
    ~Pedido();
    void acrescentar_item(std::string item, std::string quantidade);
    std::string get_itens();
    void fechar_pedido(); 

};


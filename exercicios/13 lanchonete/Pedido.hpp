#pragma once

#include "Item.hpp"

#include <vector>
#include <string>
#include <iostream>

class Pedido
{
private:
    
    std::string cliente;
    float taxa_servico = 5;
    float total = taxa_servico;
    std::vector <std::string> itens;
    std::vector <Item> pratos; 

public:
    Pedido(std::string cliente);
    ~Pedido();
    void acrescentar_prato(Item item, int quantidade);
    void gerar_nota_fiscal();
    void pagar();
    float get_taxa_servico(); 
     float get_total(); 

};


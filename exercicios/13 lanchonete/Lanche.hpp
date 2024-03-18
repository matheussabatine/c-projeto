#pragma once
#include "Item.hpp"

class Lanche : public Item
{
private:
    std::string pao;
    std::string recheio;
    std::string molho;
public:
    Lanche(std::string nome, float preco, std::string validade, float peso, std::string pao, std::string recheio, std::string molho);
    ~Lanche();
};


#pragma once

#include "Item.hpp"
#include <string>

class Salgado : public Item
{
private:
    std::string tipo;
    std::string massa;
    std::string recheio;
    
public:
    Salgado(std::string nome, float preco, std::string validade, float peso, std::string tipo, std::string massa, std::string recheio);
    ~Salgado();
};



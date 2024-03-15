#pragma once
#include <string>

class Item
{
protected:
    float preco;
    std::string validade;
    float peso;
public:
    Item(float preco, std::string validade, float peso);
    ~Item();
    float get_preco();
};


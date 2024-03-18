#pragma once
#include <string>

class Item
{
public:
    float quantidade = 0;
protected:
    std::string nome;
    float preco;
    std::string validade;
    float peso;
    
public:
    Item(std::string nome, float preco, std::string validade, float peso);
    ~Item();
    float get_preco();
    std::string get_nome();
};


#pragma once
#include <string>

class Produto
{
protected:
    std::string nome;
    float preco;
public:
    Produto(std::string nome, float preco);
    ~Produto();
    std::string get_nome();
    float get_preco();
    virtual std::string categoria() = 0;
};


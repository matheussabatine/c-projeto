#include "Lanche.hpp"

Lanche::Lanche(std::string nome, float preco, std::string validade, float peso, std::string pao, std::string recheio, std::string molho):
Item(nome, preco, validade, peso),
pao(pao),
recheio(recheio),
molho(molho)
{
}

Lanche::~Lanche()
{
}

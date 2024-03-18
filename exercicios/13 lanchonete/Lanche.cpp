#include "Lanche.hpp"

Lanche::Lanche(float preco, std::string validade, float peso, std::string pao, std::string recheio, std::string molho):
Item(preco, validade, peso),
pao(pao),
recheio(recheio),
molho(molho)
{
}

Lanche::~Lanche()
{
}

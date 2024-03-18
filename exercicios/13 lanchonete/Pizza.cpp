#include "Pizza.hpp"

Pizza::Pizza(std::string nome, float preco, std::string validade, float peso, std::string recheio, std::string borda, std::string molho):
Item(nome, preco, validade, peso),
recheio(recheio),
borda(borda),
molho(molho)
{
}

Pizza::~Pizza()
{
}

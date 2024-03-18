#include "Pizza.hpp"

Pizza::Pizza(float preco, std::string validade, float peso, std::string recheio, std::string borda, std::string molho):
Item(preco, validade, peso),
recheio(recheio),
borda(borda),
molho(molho)
{
}

Pizza::~Pizza()
{
}

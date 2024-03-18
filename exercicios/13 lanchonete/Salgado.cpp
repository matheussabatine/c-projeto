#include "Salgado.hpp"

Salgado::Salgado(std::string nome, float preco, std::string validade, float peso, std::string tipo, std::string massa, std::string recheio):
Item(nome, preco, validade, peso),
tipo(tipo),
massa(massa),
recheio(recheio)
{
}

Salgado::~Salgado()
{
}
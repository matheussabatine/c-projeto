#include "Salgado.hpp"

Salgado::Salgado(float preco, std::string validade, float peso, std::string tipo, std::string massa, std::string recheio):
Item(preco, validade, peso),
tipo(tipo),
massa(massa),
recheio(recheio)
{
}

Salgado::~Salgado()
{
}
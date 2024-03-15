#include "Item.hpp"

class Salgado : public Item
{
private:
    std::string tipo;
    std::string massa;
    std::string recheio;
    
public:
    Salgado(float preco, std::string validade, float peso, std::string tipo, std::string massa, std::string recheio);
    ~Salgado();
};



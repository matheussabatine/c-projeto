#include "Item.hpp"

class Pizza : public Item
{
private:
    std::string recheio;
    std::string borda;
    std::string molho;
public:
    Pizza(float preco, std::string validade, float peso, std::string recheio, std::string borda, std::string molho);
    ~Pizza();
};


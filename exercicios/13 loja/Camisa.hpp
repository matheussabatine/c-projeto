#include "Produto.hpp"

class Camisa : public Produto
{
private:
    char tamanho;
    std::string cor;
public:
    Camisa(std::string nome, float preco, char tamanho, std::string cor);
    ~Camisa();
    std::string categoria() override;
};


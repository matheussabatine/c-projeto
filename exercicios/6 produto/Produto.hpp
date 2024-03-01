#include <string>
#include <iostream>

class Produto
{
private:
    std::string nome;
    float valor;
    int quantidade = 0;
public:
    Produto(std::string nome, float valor);
    ~Produto();
    float valor_estoque();
    int verificar_estoque();
    void comprar_estoque(int estoque);
    void vender_estoque(int estoque);

};


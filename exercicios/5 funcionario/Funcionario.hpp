#include <string>
#include <iostream>

class Funcionario
{
private:
    std::string nome;
    std::string cargo;
    float salario_bruto;
    float salario_liquido;
    float descontos = 0.0f;

public:
    Funcionario(std::string nome, std::string cargo, float salario_bruto);
    ~Funcionario();
    void escolha_beneficios();
    void calcular_salario_liquido();
    float get_salario_liquido();
};



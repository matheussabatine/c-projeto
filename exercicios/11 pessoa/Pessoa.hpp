#include <string>
#include <iostream>

class Pessoa
{
private:
    std::string nome;
    std::string profissao;
    int idade;
public:
    Pessoa(std::string nome, std::string profissao, int idade);
    ~Pessoa();
    void get_dados();
    int calcular_idade();
};


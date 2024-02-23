#include <string>
#include "Cpf.hpp"

class Identidade
{
private:
    std::string nome;
    Cpf cpf;
    int idade;
public:
    Identidade(std::string nome, Cpf cpf, int idade);
    ~Identidade();
    void get_identidade();
};



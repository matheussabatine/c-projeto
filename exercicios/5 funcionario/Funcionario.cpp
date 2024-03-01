#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string cargo, float salario_bruto):
nome(nome),
cargo(cargo),
salario_bruto(salario_bruto)
{
    escolha_beneficios();
    calcular_salario_liquido();
}

Funcionario::~Funcionario()
{
}

void Funcionario::escolha_beneficios(){
    char resposta;
    std::cout << "aceite ou rejeite os benefícios a seguir:" << std::endl
              << "Auxilio transporte(desconto 3%)(s/n)?";
    std::cin  >> resposta;
    if(resposta == 's'){
        descontos += 3;
    }

    std::cout << "convênio médico(desconto 2%)(s/n)?";
    std::cin  >> resposta;
    if(resposta == 's'){
        descontos += 2;
    }

    //contribuicao previdencia obrigatoria
    std::cout << "previdencia social(desconto 5%)" << std::endl;
    descontos += 5;

    std::cout << "desconto total: " << descontos << "%" <<std::endl;

}

void Funcionario::calcular_salario_liquido(){
    salario_liquido = salario_bruto - (salario_bruto * (descontos/100));
}

float Funcionario::get_salario_liquido(){
    return salario_liquido;
}
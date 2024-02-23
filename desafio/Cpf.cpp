#include "Cpf.hpp"

Cpf::Cpf(std::string cpf):
cpf(cpf)
{

};
Cpf::~Cpf(){

};

std::string Cpf::get_Cpf(){
    return cpf;
}


void Cpf::Cpf_check(){
    if(cpf.size() != 11){
        std::cout << "erro cpf";
        exit(1);
    }
}
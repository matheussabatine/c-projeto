#include "Livro.hpp"

Livro::Livro(std::string nome, std::string autor, int paginas):
nome(nome),
autor(autor),
paginas(paginas)
{
}

Livro::~Livro()
{
}

void Livro::emprestar(){
    disponibilidade = false;

}

void Livro::devolver(){
    disponibilidade = true;

}

std::string Livro::get_disponibilidade(){
    if(disponibilidade == true){
        return "o livro está disponível";
    }
    else{
        return "fora do estoque";
    }
}
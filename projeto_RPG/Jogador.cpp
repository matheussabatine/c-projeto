#include "Jogador.hpp"

Jogador::Jogador(std::string nome, std::string classe):
nome(nome),
classe(classe),
maestria("Iniciante"),
xp (0)
{

}
Jogador::~Jogador(){

}
void Jogador::get_status(){
    std::cout << "NOME: " << nome << std::endl
              << "CLASSE: " << classe << std::endl
              << "MAESTRIA: " << maestria << std::endl
              << "XP: " << xp << std::endl;
}

void Jogador::ganha_xp(){
    xp += 2;
    change_maestria();
    std::cout << "+2 XP" << std::endl;
}
void Jogador::perde_xp(){
    if (xp >= 1)
    {
        xp -= 1;
        change_maestria();
        std::cout << "-1 XP" << std::endl;
    }
    else{
        std::cout << "o XP está zerado" << std::endl;
    }
    
    
    
}
void Jogador::change_maestria(){
    if(xp >= 5 && xp < 10){
        maestria = "Cavaleiro";
    }
    else if (xp >= 10)
    {
        maestria = "Campeao";
    }
    else
    {
        maestria = "Iniciante";
    }
    
}
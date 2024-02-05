#include <iostream>
#include <map>
#include <vector>

#include "letra_existe.hpp"
//extern não estou definindo a variável aqui, estou dizendo que ela já foi declarada em outro arquivo 
extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chuta(){
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute)){
        std::cout << "Você acertou! Seu chute está na palavra." << std::endl;
    }
    else{
        std::cout << "Você errou! Seu chute não está na palavra." << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}
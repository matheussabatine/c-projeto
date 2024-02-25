#include <iostream>

// boolenos:
// retorno 0(zero) é falso
// retorno 1 é verdadeiro

int main(){

    std::cout << "Bem-Vindo!" << std::endl;

    const int NUM = 9;


    int chute;
    std::cout << "digite o chute: ";
    std::cin >> chute;

    bool resposta_correta = chute == NUM;
    bool resposta_maior = chute > NUM;
    if(resposta_correta){
        std::cout << "resposta correta" << std::endl;

    }
    else if(resposta_maior){
        std::cout << "o número é menor do que " << chute << std::endl;
    }
    else{
        std::cout << "o número é maior do que " << chute << std::endl;
    }
    
    return 0;
}
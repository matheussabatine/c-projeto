#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


// boolenos:
// retorno 0(zero) é falso
// retorno 1 é verdadeiro

int main(){
    float teste = 561.4f;
    srand(time(0));
    const int NUM = rand()%100;
    int tentativas;
    int max_tentativas;
    int chute;
    bool resposta_correta = false;
    bool resposta_maior = false;

    std::cout << "Bem-Vindo! " << NUM << std::endl;
    std::cout << "Digite o máximo de tentativas: ";
    std::cin >> max_tentativas;

    


    for(tentativas = 1; tentativas <= max_tentativas; tentativas++){
        std::cout << "tentativa " << tentativas << std::endl;
        std::cout << "digite o chute: ";
        std::cin >> chute;

        resposta_correta = chute == NUM;
        resposta_maior = chute > NUM;

        if(resposta_correta){
            std::cout << "resposta correta" << std::endl;
            break;

        }
        else if(resposta_maior){
            std::cout << "o número é menor do que " << chute << std::endl;
        }
        else{
            std::cout << "o número é maior do que " << chute << std::endl;
        }

    }
    if(resposta_correta){
        std::cout << "Vitória em " << tentativas << " tentativas"<< std::endl;
    }

    std::cout << "GAME OVER" << std::endl;
    //teste
    std::cout << std::fixed << std::setprecision(2) << teste << std::endl;
    
    
    return 0;
}
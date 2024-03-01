#include "Aluno.hpp"

Aluno::Aluno(int matricula, std::string nome):
matricula(matricula),
nome(nome)
{
}

Aluno::~Aluno()
{
}

void Aluno::inserir_notas(){
    for(int i = 0; i <=2; i++){
        std::cout <<"insira a nota " << i+1 << ": ";
        std::cin >> notas[i]; 
    }

}

void Aluno::get_notas(){
    for(int i = 0; i <=2; i++){
        std::cout <<"nota " << i+1 << ": " << notas[i] << std::endl;
 
    }
     std::cout << std::fixed << std::setprecision(1);
     std::cout << "media : " << media() << std::endl;
     std::cout << avaliar_situacao() << std::endl;
    
}

float Aluno::media(){
    float media;
    for(int i = 0; i<=2; i++){
        media += notas[i];
    }
    return media/3;
}

std::string Aluno::avaliar_situacao(){
    if( media() < 7){
        return "Reprovado";
    }
    else{
        return "Aprovado";
    }
    
}
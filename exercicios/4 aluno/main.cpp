#include <iostream>

#include "Aluno.hpp"

int main(){
    Aluno aluno(123, "Saulo");
    aluno.inserir_notas();
    aluno.get_notas();
}
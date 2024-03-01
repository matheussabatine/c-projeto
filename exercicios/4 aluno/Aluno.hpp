#include <iostream>
#include <iomanip>
#include <string>

class Aluno
{
private:
    int matricula;
    std::string nome;
    float notas[3];
    std::string situacao;
public:
    Aluno(int matricula, std::string nome);
    ~Aluno();
    void inserir_notas();
    void get_notas();
    float media();
    std::string avaliar_situacao();

};


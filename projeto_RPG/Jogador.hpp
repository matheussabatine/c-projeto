#include <iostream>
#include <string>

class Jogador
{
private:
    std::string nome;
    std::string classe;
    std::string maestria;
    int xp;
    
public:
    Jogador(std::string nome, std::string classe);
    ~Jogador();
    void get_status();
    void ganha_xp();
    void perde_xp();
    
private:
    void change_maestria();
};

/*
jogador::jogador()
{
}

jogador::~jogador()
{
}
*/
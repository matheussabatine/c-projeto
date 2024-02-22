#include <iostream>
#include "jogador.hpp"
using namespace std;

int main(){

    Jogador player1("mario", "mago");

    player1.get_status();

    int i = 0;
    while(i != 6){
        std::cout << "OPCOES: " << std::endl
              << "1 - STATUS" << std::endl
              << "2 - +2 XP" << std::endl
              << "3 - -1 XP" << std::endl
              << "6 - SAIR" << std::endl;
        cin >> i;

        switch (i)
        {
        case 1:
            player1.get_status();
            break;

        case 2:
            player1.ganha_xp();
            break;

        case 3:
            player1.perde_xp();
            break;
        
        default:
            break;
        }

    }

    return 0;
}
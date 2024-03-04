#include <iostream>
#include "Carro.hpp"
using namespace std;

int main(){
    Carro car;

    cout << endl;
    cout << "marca " << car.get_marca() << endl;
    cout << "modelo " << car.get_modelo() << endl;
    int i = 0;
    while (i != 4)
    {
        cout << "escolha uma opcao: " << endl;
        cout << "1 - acelerar " << endl;
        cout << "2 - frear " << endl;
        cout << "3 - ver velocidade " << endl;
        cout << "4 - sair " << endl;

        cin >> i;

        switch (i)
        {
        case 1:
            car.acelerar();
            cout << "acelerou 10 Km/h" << endl;
            break;
        
        case 2:
            car.frear();
            cout << "freou 10 Km/h" << endl;
            break;

        case 3:
            cout << "velocidade : " <<car.get_vel_atual() << " Km/h" << endl;
            break;
        default:
            break;
        }
        
    }
    


}
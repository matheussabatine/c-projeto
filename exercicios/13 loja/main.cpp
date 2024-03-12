#include <iostream>
#include "Camisa.hpp"

using namespace std;

int main(){
    std::string list[4];
    Camisa cam("lacoste", 20, 'G', "verde");
    list[2] = "cam";

    cout << cam.get_nome() << endl;
    cout << cam.get_preco() << endl;
     cout << list[2] << endl;
    return 0;
}
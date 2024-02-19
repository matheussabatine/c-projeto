#include <iostream>


class Calcular{
    public:
        int num1 = 14;
        int num2 = 63;

        int somar(){
            return num1 + num2;
        }
};

int main(){

    Calcular objeto;

    std::cout << objeto.somar() << std::endl;

    return 0;

}
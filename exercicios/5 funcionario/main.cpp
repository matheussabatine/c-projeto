#include "Funcionario.hpp"

int main(){
    Funcionario funcionario("mario", "engenheiro", 2200);
    std::cout << "salario liquido : R$ " << funcionario.get_salario_liquido();
    return 0;
}
#include "Pessoa.hpp"

int main(){
    Pessoa person("carlos", "engenheiro", 22);
    person.get_dados();

    std::cout << person.calcular_idade() << " anos bissextos";
    return 0;
}
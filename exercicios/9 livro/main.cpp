#include <iostream>
#include "Livro.hpp"

int main(){
    Livro livro("o mergulhor", "jose", 120);

    std::cout << livro.get_disponibilidade() << std::endl;
    livro.emprestar();
    std::cout << livro.get_disponibilidade() << std::endl;
    livro.devolver();
    std::cout << livro.get_disponibilidade() << std::endl;
    return 0;
}
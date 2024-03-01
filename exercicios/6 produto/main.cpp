#include <iostream>
#include "Produto.hpp"

int main(){
    Produto produto("vassoura", 29.99);

    std::cout << "estoque inicial: " << produto.verificar_estoque() << std::endl;
    
    produto.comprar_estoque(10);
    std::cout << "comprar 10 quantidades: " << produto.verificar_estoque() <<std::endl;
    produto.vender_estoque(2);
    std::cout << "vender 2 quantidades: " << produto.verificar_estoque() <<std::endl;
    std::cout << "valor do estoque: " << produto.valor_estoque() <<std::endl;
    return 0;
}
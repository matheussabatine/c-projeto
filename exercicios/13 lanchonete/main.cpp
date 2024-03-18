#include <iostream>
#include "Pizza.hpp"
#include "Lanche.hpp"
#include "Salgado.hpp"
#include "Pedido.hpp"

using namespace std;

int main(){

    Pizza pizza_calabresa("Pizza de Calabresa", 40, "30/03/2024", 200, "calabresa", "com catupiry", "ketchup");
    Lanche x_tudo("x-tudo", 30, "31/01/2025", 600, "filao", "tudo", "barbecue");
    Salgado coxinha("coxinha", 4.99, "10/10/2222", 70, "frito", "massa italiana", "presunto/queijo");

    Pedido ped1("matheus");
    ped1.acrescentar_prato(pizza_calabresa, 3);
    ped1.acrescentar_prato(x_tudo, 1);
    ped1.acrescentar_prato(coxinha, 2);

    ped1.gerar_nota_fiscal();

    return 0;
}
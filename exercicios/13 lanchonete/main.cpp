#include <iostream>
#include "Pizza.hpp"
#include "Pedido.hpp"

using namespace std;

int main(){

    Pizza pizza_calabresa(40, "30/03/2024", 200, "calabresa", "com catupiry", "ketchup");
    cout << pizza_calabresa.get_preco() << endl;

    Pedido ped1("matheus", 15);
    ped1.acrescentar_item("pizza_calabresa", "3");
    cout << ped1.get_itens() << endl;

    return 0;
}
#include "Pedido.hpp"

Pedido::Pedido(std::string cliente):
cliente(cliente)
{
}

Pedido::~Pedido()
{
}

float Pedido::get_taxa_servico(){
    return taxa_servico;
} 

float Pedido::get_total(){
    return total;
}

void Pedido::acrescentar_prato(Item item, int quantidade){
    item.quantidade = quantidade;
    pratos.push_back(item);

}

void Pedido::gerar_nota_fiscal(){

    std::cout << std::fixed;
    std::cout.precision(2);
    
    std::cout << "* Lanchonete Come-Come *" << std::endl;
    std::cout << "NOTA FISCAL" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i <= pratos.size() - 1; i++){
        std::cout << pratos[i].get_nome() << "............  " << pratos[i].get_preco() << "/Uni    " << pratos[i].quantidade << " x  R$ " << pratos[i].quantidade * pratos[i].get_preco() << std::endl;
        total += pratos[i].quantidade * pratos[i].get_preco();
    }
    std::cout << "Taxa de Servico............ R$ " << get_taxa_servico();

    std::cout << std::endl;
    std::cout << "TOTAL: R$ " << total <<std::endl;

    pagar();

}

void Pedido::pagar(){
    float pagamento;
    float troco;
   

    while(total != 0){

        std::cout << "valor a pagar: " << get_total() << std::endl;
        std::cout << "digite o valor a ser pago: ";
        std::cin >> pagamento;
        if (pagamento > total){
            troco = pagamento - total;
            total = 0;
            std::cout << "Dívida Paga, seu troco é de R$ " << troco <<std::endl;
        }
        else if(pagamento == total){
            total = 0;
            std::cout << "Dívida Paga" << std::endl;

        }
        else{
            total = total - pagamento;
            if(total < 0.01){
                std::cout << "Dívida Paga tipo 2" << std::endl;
                total = 0;

            }
            else{
                std::cout << "valor insuficiente, pague o restante" << std::endl;
            }
            
        }
    }
}
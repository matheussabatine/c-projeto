#include <iostream>

#include "Pessoa.hpp"
#include "Conta_corrente.hpp"
#include "Conta_poupanca.hpp"

using namespace std;

int main(){

    Pessoa pessoa("Arnaldo", "123-456-789-10");

    cout << "PESSOA" << endl;
    cout << pessoa.get_nome() << endl;
    cout << pessoa.get_cpf() << endl;

    Conta_corrente conta("Rodrigo", "888-456-789-10", 001);

    cout << "CONTA Rodrigo" << endl;
    cout << conta.get_nome() << endl;
    cout << conta.get_cpf() << endl;
    cout << conta.get_saldo() << endl;
    cout << conta.tipo() << endl;

    Conta_poupanca conta2("Jaiminho", "222-456-789-10", 002);

    cout << "CONTA Jaiminho" << endl;
    cout << conta2.get_nome() << endl;
    cout << conta2.get_cpf() << endl;
    cout << conta2.get_saldo() << endl;
    cout << conta2.tipo() << endl;

    cout << "Depositar 500 R$" << endl;
    conta.Depositar(500);
    conta2.Depositar(500);

    cout << "CONTA Rodrigo" << endl;
    cout << conta.get_saldo() << endl;

    cout << "CONTA Jaiminho" << endl;
    cout << conta2.get_saldo() << endl;

    cout << "Transferir 200 R$ do Rodrigo para Jaiminho" << endl;
    conta.Tranferir(conta2, 200);

    cout << "CONTA Rodrigo" << endl;
    cout << conta.get_saldo() << endl;

    cout << "CONTA Jaiminho" << endl;
    cout << conta2.get_saldo() << endl;




    return 0;
}
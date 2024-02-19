#include <iostream>
#include <string>
#include <map>

void ListarUsuarios(std::map<int, std::string>& lista){
    if (lista.empty()){
        std::cout << "Lista Vazia" << std::endl;
    }
    else{
        for(int i = 1; i <= lista.size(); i++){
            std::cout << i << " - "
                      << lista[i] << std::endl;
        }
    }

}

void CadastrarUsuarios(std::map<int, std::string>& lista, int& id){
    std::string nome;

    std::cout << "Insira o nome do usuário:" << std::endl;
    std::cin >> nome;
    if (lista.empty()){
        lista[1] = nome;
        id++;
    }
    else{
        lista[id + 1] = nome;
        id++;

    }

    std::cout << "Cadastrado com sucesso" << std::endl;
}

void ExcluirUsuarios(std::map<int, std::string>& lista){
    int num;

    std::cout << "Insira o número do usuário:" << std::endl;
    std::cin >> num;

    lista.erase(num);
    
}

int main(){
    int operacao;
    int id = 0;
    std::map<int, std::string> lista;

    std::cout << "sistema de cadastro de pessoas" << std::endl;


    while (operacao != 4){
        std::cout << "operação desejada:" << std::endl
                    << "1 - Listar Usuários" << std::endl
                    << "2 - Cadastrar Usuários" << std::endl
                    << "3 - Excluir Usuários" << std::endl
                    << "4 - Sair do Programa" << std::endl;
        std:: cin >> operacao;

        switch (operacao)
        {
        case 1:
            ListarUsuarios(lista);
            break;
        
        case 2:
            CadastrarUsuarios(lista, id);
            break;
        
        case 3:
            ExcluirUsuarios(lista);
            break;

        default:
            break;
        }
    }
    std::cout << "FIM DO PROGRAMA" << std::endl;
    return 0;
}
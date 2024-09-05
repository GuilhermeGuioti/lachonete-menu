#include <iostream>
#include <string>
using namespace std;

int main(){
    // Declaracao de variaveis
    string name;
    int addMais = 1;
    int opcaoGeral, quantidade, opcaoLanche, opcaoBebida, opcaoSobremesa;
    float valorTotal;

    // Abertura com nome
    cout << "Bem vindo a lanchonete" << endl;
    cout << "Por favor, informe seu nome: ";;
    getline(cin, name);
    cout << endl;

    // Laco de Repeticao
    while(addMais == 1){

        // Menu Incial
        cout << "Ola, " << name << ". Escolha uma categoria:" << endl;
        cout << "1 - Lanches" << endl << "2 - Bebidas" << endl << "3 - Sobremesa" << endl << "4 - Finalizar Pedido" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcaoGeral;
        cout << endl;
    
        // Menu Segundario
        switch (opcaoGeral){
            // Lanche
            case 1: 
                cout << "Lanches Disponiveis:" << endl;
                cout << "1 - Hamburguer (R$ 10.00)" << endl;
                cout << "2 - Cheeseburguer (R$ 12.00)" << endl;
                cout << "3 - X-Bacon (R$ 15.00)" << endl;

                cout << "Escolha uma opcao: ";
                cin >> opcaoLanche;
                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoLanche){
                    case 1:
                        valorTotal += 10.0 * quantidade;
                        cout << "Hamburguer(es) adicionado(s) ao pedido.";
                        break;
                    case 2:
                        valorTotal += 12.0 * quantidade;
                        cout << "Cheeseburguer(es) adicionado(s) ao pedido.";
                        break;
                    case 3:
                        valorTotal += 15.0 * quantidade;
                        cout << "X-Bacon(s) adicionado(s) ao pedido.";
                        break;
                    default:
                        cout << "Deu Erro"; 

                }
            break;

            //Bebida    
            case 2: 
                cout << "Bebidas Disponiveis:" << endl;
                cout << "1 - Refrigerante (R$ 5.00)" << endl;
                cout << "2 - Suco (R$ 7.00)" << endl;
                cout << "3 - Agua (R$ 3.00)" << endl;

                cout << "Escolha uma opcao: ";
                cin >> opcaoBebida;
                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoBebida){
                    case 1:
                        valorTotal += 5.0 * quantidade;
                        cout << "Refrigerante(s) adicionado(s) ao pedido.";
                        break;
                    case 2:
                        valorTotal += 7.0 * quantidade;
                        cout << "Suco(s) adicionado(s) ao pedido.";
                        break;
                    case 3:
                        valorTotal += 3.0 * quantidade;
                        cout << "Agua(s) adicionado(s) ao pedido.";
                        break;
                    default:
                        cout << "Deu Erro"; 
                }
            break;

            // Sobremesa    
            case 3: 
                cout << "Sobremesas Disponiveis:" << endl;
                cout << "1 - Sorvete (R$ 8.00)" << endl;
                cout << "2 - Bolo (R$ 6.00)" << endl;
                cout << "3 - Pudim (R$ 5.00)" << endl;

                cout << "Escolha uma opcao: ";
                cin >> opcaoSobremesa;
                cout << "Digite a quantidade: ";
                cin >> quantidade;

                switch (opcaoSobremesa){
                    case 1:
                        valorTotal += 8.0 * quantidade;
                        cout << "Sorvete(s) adicionado(s) ao pedido.";
                        break;
                    case 2:
                        valorTotal += 6.0 * quantidade;
                        cout << "Bolo(s) adicionado(s) ao pedido.";
                        break;
                    case 3:
                        valorTotal += 5.0 * quantidade;
                        cout << "Pudim(s) adicionado(s) ao pedido.";
                        break;
                    default:
                        cout << "Deu Erro"; 
                }
            break;

            // Finalizar Agora
            case 4:
                break;
        }
        // Repetir o laço
        cout << endl;
        cout << "Deseja adicionar mais itens ao pedido? [1]Sim [2]Nao: ";
        cin >> addMais;
    }

    if(valorTotal > 50){
        valorTotal = valorTotal * 0.9;
    }

    cout << endl;
    cout << "Pedido Finalizado" << endl;
    cout << "O valor final: $" << valorTotal << endl;
    cout << "Obrigado por comprar na nossa Lanchonete, " << name; 

    return 0;
}
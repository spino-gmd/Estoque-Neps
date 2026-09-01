#include <bits/stdc++.h>
using namespace std;

int main() {
    // coloca as variáveis aqui
    int menu;
    char opt;
    FILE *inv = fopen("inventory.txt", "w");

    //coloca o código dentro do while, é pra fazer o loop
    while(1){
    cout << "================================" << endl;
    cout << "Controle de Estoque" << endl;
    cout << "================================" << endl;
    cout << "Selecione uma opção:" << endl;
    cout << "1. Adicionar Item" << endl;
    cout << "2. Remover Item" << endl;
    cout << "3. Listar Estoque" << endl;
    cout << "4. Sair" << endl;
    cout << "Opção:";
    //vendo se consigo editar
    do{
    cin >> menu;
    switch(menu){
        case 1:

        
        case 2:


        case 3:


        case 4:
        cout << "Obrigado por usar o Controle de Estoques! Até a próxima.";
        return 0;

        default:
        cout << "Opção inválida! Tente novamente.";
        while(getchar() !=  '\n');
        break;
    }
}while(menu != 1 && menu != 2 && menu != 3 && menu != 4);

    }
    
    return 0;
}
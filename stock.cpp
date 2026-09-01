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

    cin >> menu;
    switch(menu){
        case 1:

        case 2:

        case 3:

        case 4:

        default:
        
    }

    }
    
    return 0;
}
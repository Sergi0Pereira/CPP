#include <iostream>
#include <string> 
using namespace std;

void nome_idade(string &nome,int &idade){
    
}

    int main(){
    
    string pnome;
    int pidade;

        cout<<"Qual o seu nome?\n";
    cin>> pnome;
        cout<< "Qual a sua idade?\n"; 
    cin>> pidade;

    nome_idade(pnome,pidade);
    

    cout << "\nO seu nome e "<< pnome << ".A sua idade e de " << pidade << ".";

    return 0;
}
    
    // opcional a colocacao porque a funcao é vazia.
    // corpo da funcao no fim. uma outra forma mais organizada de estruturar o codigo.

 
    
    
    

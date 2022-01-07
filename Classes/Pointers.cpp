#include <iostream>
using namespace std;
int main(){

    string nome="Sergio";

    string* p_nome=&nome;

    cout<<&nome<< "\n"; // imprime o endereço contido na variavel nome
    cout<<p_nome<< "\n"; // imprime o endereço da contido no apontador p_nome que esta a apontar para a variavel nome;
    cout<<*p_nome<< "\n"; // * imprime o conteudo dentro da variavel nome;
    cout<<&p_nome<< "\n"; // imprime o endereço do apontador p_nome;
    cout<<nome<< "\n"; // imprime o conteudo dentro de nome;

    *p_nome="Miguel"; // Modifica o valor do apontador e consequentemente da variavel para a qual aponta(neste caso - nome);

    cout<<nome<< "\n";
    cout<<*p_nome<< "\n"; // * imprime o conteudo dentro da variavel nome, que foi alterado por causa da alteraçao do apontador; 
    
    return 0;
}
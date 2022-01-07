#include <iostream>
#include <string> // o c++ ao contrario do c, permite usar string em vez de se ter de recorrer à funcao char
using namespace std;
int main(){

    /*std::* - */cout<<("Seja muito bem vindo!")<< std::endl;
    
    string nome;
    char nomes[30];
    double myNum;

        cout<<"Digite o seu nome.\n";
        cin>> nomes;
        cout<<"Digite a sua idade.\n";
        cin>> myNum;

        cout << "O seu nome e " << nomes << " e tem "<<myNum<<" anos." ;
// Revisoes terminadas. Novos conteudos a partir daqui.




    return 0;
}
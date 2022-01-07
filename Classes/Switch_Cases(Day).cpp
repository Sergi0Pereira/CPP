#include <iostream>
using namespace std;

int main(){

    int day;

    printf("Em que diz se encontra?\n");

    scanf("%i",&day);
    
    switch (day){

    case 1:

        cout<<"Segunda-Feira";
        break;

    case 2:

        cout<<"Terca-feira";
        break;
    
    case 3:

        cout<<"Quarta-feira";
        break;
    case 4:

        cout<<"Quinta-feira";
        break;
    case 5:

        cout<<"Sexta-feira";
        break;
    
    return 0;
    }

}
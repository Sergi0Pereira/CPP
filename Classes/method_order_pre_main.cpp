#include <iostream>
#include <string> 
using namespace std;

int adicao(int &x, int &y){

  return x+y;
}
int main(){
                                                                
    int n2;
    int n1;

    cin >> n1;
    cin >> n2;

    int resposta=adicao(n1,n2);

        cout<< "A adicao dos dois numeros e igual a " <<resposta; 

    

}
      

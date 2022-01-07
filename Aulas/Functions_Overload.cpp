#include <iostream>
#include <string> 
using namespace std;

functionadd(int x, int y){
    return x+y;
}

functionadd(double x,double y){ // podemos usar a mesma funçao para diferentes tipos de variaveis.Apenas temos de as definir;
    return x+y;
}

functionadd(float x, float y){
    return x+y;
}
int main(){

    int _int = functionadd(10,10);
    double _double = functionadd(100,100);
    float _float = functionadd(1.0,10.0);

    cout << "Int= " << _int << ".\n";
    cout << "Double= " << _double << ".\n";
    cout << "Float= " << _float << ".\n";

    return 0;
}
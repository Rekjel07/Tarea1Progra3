#include <iostream>
using namespace std;

int main(){
    int tabla=0, cuad=0, cub=0;
    cout<<"entero"<<" cuadrado"<<" cubo\n";
    while(tabla<=10){
        cuad=tabla*tabla;
        cub=tabla*tabla*tabla;
        cout<<tabla<<"\t"<<cuad<<"\t"<<cub<<"\n";
        tabla+=1;
    }


    return 0;
}
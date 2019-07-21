#include <iostream>
using namespace std;

int main(){
    cout << "Ingrese un numero de 5 digitos: ";
    int num=0, pal=0;
    cin >> num;
    int num1 = num;
    do{
        pal=pal*10 + num % 10;
        num=num/10;
    }while(num!=0);
if(num1==pal){
    cout<<"Es un palíndromo\n";
}
else
{
    cout<<"No es un palíndromo\n";
}
    return 0;
}
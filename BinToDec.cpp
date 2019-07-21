#include <iostream>
using namespace std;

int main(){
    int num=0, bit=0, multbit=1, total=0;
    cout << "Ingrese un numero binario: ";
    cin >> num;
    int numbin=num;
    do{
        bit=num%10 * multbit;
        num=num/10;
        multbit*=2;
        total+=bit;
    }while(num!=0);
    cout<<"El numero en decimal es: "<<total<<"\n";
}
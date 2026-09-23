#include <iostream>
using namespace std;

int main(){
    float compra, descuento, total;
    cout << "Escriba la cantidad de su compra: ";
    cin >> compra;

    if (compra>100 && compra<=200)
    {
        descuento= compra * 0.10;
        total= compra - descuento;

        cout << "El total a pagar es: " << total; 

    } else if (compra>200)
    {
        descuento = compra * 0.20;
        total = compra - descuento;
        cout << "El total a pagar es: " << total; 
    }
    else{
        total = compra;
        cout << "El total a pagar es: " << total; 
    }

    
}
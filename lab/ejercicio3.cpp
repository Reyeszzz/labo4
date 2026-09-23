#include <iostream>
using namespace std;

int main(){
     int num;
    cout << "Escriba un numero: ";
    cin >> num;

    if (num>=1)
    {
        if (num <=100)
        {
            cout << "El numero " << num << " esta entre el 1 y el 100";
        }
        else{
            cout << "El numero " << num << " es mayor de 100";
        }
        
    }else{
        cout << "El numero " << num << " es menor de 1";
    }
    return 0;

}
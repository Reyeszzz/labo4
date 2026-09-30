#include <iostream>
using namespace std;

int main() {

    int opcion;
    double saldo, cantidad;

    cout << "Ingrese la cantidad que tiene actualmente: " <<endl;
    cin >> saldo;


    cout << "1. Ingresar dinero" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Consultar saldo" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {

        case 1:
            cout << "Ingrese la cantidad de dinero: ";
            cin >> cantidad;

            saldo = saldo + cantidad;

            cout << "Dinero ingresado correctamente." << endl;
            cout << "Nuevo saldo: $" << saldo << endl;
            break;

        case 2:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> cantidad;

            if (cantidad <= saldo) {
                saldo = saldo - cantidad;

                cout << "Retiro realizado correctamente." << endl;
                cout << "Nuevo saldo: $" << saldo << endl;
            }
            else {
                cout << "Fondos insuficientes." << endl;
            }

            break;

        case 3:
            cout << "Su saldo actual es: $" << saldo << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int opc;
    double radio, lado, base, altura, area;

    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opc;

    switch (opc) {

        case 1:
            cout << "Ingrese el tamaño del radio: ";
            cin >> radio;

            area = 3.1416 * radio * radio;

            cout << "El area del circulo es: " << area << endl;
            break;

        case 2:
            cout << "Ingrese el tamaño del lado: ";
            cin >> lado;

            area = lado * lado;

            cout << "El area del cuadrado es: " << area << endl;
            break;

        case 3:
            cout << "Ingrese el tamaño de la base: ";
            cin >> base;

            cout << "Ingrese el tamaño de la altura: ";
            cin >> altura;

            area = (base * altura) / 2;

            cout << "El area del triangulo es: " << area << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
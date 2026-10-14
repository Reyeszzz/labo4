#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Ingrese un numero para hacer cuenta regresiva: ";
    cin >> num;

    for ( int i = num; i >= 0 ; i--)
    {
        cout << i << endl;
    }
    
    return 0;
}
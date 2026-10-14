
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Ingrese un numero mayor a 5: " << endl;
    cin >> num;
    for (int i = 5; i <= num; i+=5)
    {
        cout << i << endl;
    }
    return 0;
}
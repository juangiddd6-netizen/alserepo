#include <iostream>
using namespace std;

int main() {
    int num;
    int suma = 0;

    cout << "Ingrese 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        suma += num;
    }

    cout << "La suma total es: " << suma << endl;
    cout << "El promedio es: " << (double)suma / 5 << endl;

    return 0;
}
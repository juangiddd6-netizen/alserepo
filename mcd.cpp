#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Digite el primer numero: ";
    cin >> num1;

    cout << "Digite el segundo numero: ";
    cin >> num2;

    int residuo;

    while (num2 != 0) {
        residuo = num1 % num2;
        num1 = num2;
        num2 = residuo;
    }

    cout << "El MCD es: " << num1;

    return 0;
}
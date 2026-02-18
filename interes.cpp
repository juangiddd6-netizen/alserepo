#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double P, r;
    int n, t;

    cout << "Ingrese el capital inicial : ";
    cin >> P;
    cout << "Ingrese la tasa de interes anual en decimal : ";
    cin >> r;
    cout << "Ingrese el numero de veces que se aplica el interes por año : ";
    cin >> n;
    cout << "Ingrese el numero de años : ";
    cin >> t;

    double A = P * pow(1 + (r / n), n * t);

    cout << fixed << setprecision(2);
    cout << "El monto final es: " << A << endl;

    return 0;
}
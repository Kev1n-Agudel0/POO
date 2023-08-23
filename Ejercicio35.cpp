#include <iostream>
using namespace std;

int main() {
    int numero;
    factorial = 1; // Usamos unsigned long long para manejar factoriales grandes

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i; // Multiplicar el factorial por i en cada iteración
        }
        cout << "El factorial de " << numero << " es " << factorial << endl;
    }

    return 0;
}

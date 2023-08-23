#include <iostream>
using namespace std;

// Funci�n recursiva para calcular el factorial
calcularFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: factorial de 0 y 1 es 1
    } else {
        return n * calcularFactorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int numero;

    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no est� definido para n�meros negativos." << endl;
    } else {
        factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es " << factorial << endl;
    }

    return 0;
}

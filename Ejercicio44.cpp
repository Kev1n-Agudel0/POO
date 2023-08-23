#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros; // Usamos un vector para almacenar los n�meros
    double suma = 0;
    
    cout << "Ingrese cinco n�meros:" << endl;
    
    // Solicitar al usuario que ingrese cinco n�meros
    for (int i = 0; i < 5; ++i) {
        double numero;
        cout << "N�mero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero); // Agregar el n�mero al vector
        suma += numero;
    }
    
    // Calcular la media aritm�tica
    double media = suma / 5.0;
    
    // Mostrar la media
    cout << "La media aritm�tica de los n�meros es: " << media << endl;
    
    return 0;
}

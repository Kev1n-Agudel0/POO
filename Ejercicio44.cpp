#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros; // Usamos un vector para almacenar los números
    double suma = 0;
    
    cout << "Ingrese cinco números:" << endl;
    
    // Solicitar al usuario que ingrese cinco números
    for (int i = 0; i < 5; ++i) {
        double numero;
        cout << "Número " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero); // Agregar el número al vector
        suma += numero;
    }
    
    // Calcular la media aritmética
    double media = suma / 5.0;
    
    // Mostrar la media
    cout << "La media aritmética de los números es: " << media << endl;
    
    return 0;
}

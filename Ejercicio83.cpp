#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Función para sumar dos números binarios
string sumarBinarios(string binario1, string binario2) {
    // Convierte los números binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la suma en entero
    int suma = numero1 + numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(suma).to_string();
}

// Función para restar dos números binarios
string restarBinarios(string binario1, string binario2) {
    // Convierte los números binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la resta en entero
    int resta = numero1 - numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(resta).to_string();
}

// Función para multiplicar dos números binarios
string multiplicarBinarios(string binario1, string binario2) {
    // Convierte los números binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la multiplicación en entero
    int multiplicacion = numero1 * numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(multiplicacion).to_string();
}

// Función para dividir dos números binarios
string dividirBinarios(string binario1, string binario2) {
    // Convierte los números binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la división en entero
    int division = numero1 / numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(division).to_string();
}

int main() {
    string binario1, binario2;
    
    cout << "Ingrese el primer número binario: ";
    cin >> binario1;
    
    cout << "Ingrese el segundo número binario: ";
    cin >> binario2;
    
    // Realiza operaciones en binario
    string suma = sumarBinarios(binario1, binario2);
    string resta = restarBinarios(binario1, binario2);
    string multiplicacion = multiplicarBinarios(binario1, binario2);
    string division = dividirBinarios(binario1, binario2);
    
    cout << "Suma en binario: " << suma << endl;
    cout << "Resta en binario: " << resta << endl;
    cout << "Multiplicación en binario: " << multiplicacion << endl;
    cout << "División en binario: " << division << endl;
    
    return 0;
}

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Funci�n para sumar dos n�meros binarios
string sumarBinarios(string binario1, string binario2) {
    // Convierte los n�meros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la suma en entero
    int suma = numero1 + numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(suma).to_string();
}

// Funci�n para restar dos n�meros binarios
string restarBinarios(string binario1, string binario2) {
    // Convierte los n�meros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la resta en entero
    int resta = numero1 - numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(resta).to_string();
}

// Funci�n para multiplicar dos n�meros binarios
string multiplicarBinarios(string binario1, string binario2) {
    // Convierte los n�meros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la multiplicaci�n en entero
    int multiplicacion = numero1 * numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(multiplicacion).to_string();
}

// Funci�n para dividir dos n�meros binarios
string dividirBinarios(string binario1, string binario2) {
    // Convierte los n�meros binarios en enteros
    int numero1 = bitset<32>(binario1).to_ulong();
    int numero2 = bitset<32>(binario2).to_ulong();
    
    // Realiza la divisi�n en entero
    int division = numero1 / numero2;
    
    // Convierte el resultado de nuevo a binario
    return bitset<32>(division).to_string();
}

int main() {
    string binario1, binario2;
    
    cout << "Ingrese el primer n�mero binario: ";
    cin >> binario1;
    
    cout << "Ingrese el segundo n�mero binario: ";
    cin >> binario2;
    
    // Realiza operaciones en binario
    string suma = sumarBinarios(binario1, binario2);
    string resta = restarBinarios(binario1, binario2);
    string multiplicacion = multiplicarBinarios(binario1, binario2);
    string division = dividirBinarios(binario1, binario2);
    
    cout << "Suma en binario: " << suma << endl;
    cout << "Resta en binario: " << resta << endl;
    cout << "Multiplicaci�n en binario: " << multiplicacion << endl;
    cout << "Divisi�n en binario: " << division << endl;
    
    return 0;
}

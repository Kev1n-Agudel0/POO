#include <iostream>
using namespace std;

int main() {
    // Definir el tamaño de la matriz
    const int num_estudiantes = 4;
    const int num_notas = 3;

    // Crear una matriz para almacenar la información de los estudiantes y sus notas
    double matriz_estudiantes[num_estudiantes][num_notas];

    // Ingresar las notas de los estudiantes en la matriz
    for (int i = 0; i < num_estudiantes; i++) {
        cout << "Ingrese las notas del Estudiante " << i + 1 << ":" << endl;
        for (int j = 0; j < num_notas; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> matriz_estudiantes[i][j];
        }
    }

    // Mostrar la información de los estudiantes y sus notas usando un ciclo
    for (int i = 0; i < num_estudiantes; i++) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        for (int j = 0; j < num_notas; j++) {
            cout << "Nota " << j + 1 << ": " << matriz_estudiantes[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}

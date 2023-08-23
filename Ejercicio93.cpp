#include <iostream>
using namespace std;

string calcularDiaSemana(int dia, int mes, int anio) {
    if (mes == 1 || mes == 2) {
        mes += 12;
        anio -= 1;
    }

    int K = anio % 100;
    int J = anio / 100;

    int diaSemana = (dia + 13 * (mes + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;

    // Ajustar los valores para que 0 sea domingo, 1 sea lunes, etc.
    switch (diaSemana) {
        case 0:
            return "Domingo";
        case 1:
            return "Lunes";
        case 2:
            return "Martes";
        case 3:
            return "Mi�rcoles";
        case 4:
            return "Jueves";
        case 5:
            return "Viernes";
        default:
            return "S�bado";
    }
}

int main() {
    int dia, mes, anio;

    cout << "Ingrese el d�a: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el a�o: ";
    cin >> anio;

    string diaSemana = calcularDiaSemana(dia, mes, anio);

    cout << "El d�a de la semana para " << dia << "/" << mes << "/" << anio << " es " << diaSemana << "." << endl;

    return 0;
}

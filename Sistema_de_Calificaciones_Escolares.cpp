#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {

        case 1: {
            string nombre;
            float calificacion1, calificacion2, calificacion3;

            cout << "Ingresa el nombre del estudiante: ";
            cin >> nombre;

            cout << "Ingresa la calificacion 1: ";
            cin >> calificacion1;

            cout << "Ingresa la calificacion 2: ";
            cin >> calificacion2;

            cout << "Ingresa la calificacion 3: ";
            cin >> calificacion3;

            float promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

            cout << "\n=== RESUMEN ===" << endl;
            cout << "Estudiante: " << nombre << endl;
            cout << "Promedio: " << promedio << endl;

            break;
        }

        case 2:
            cout << "\n=== INFORMACION DEL PROGRAMA ===" << endl;
            cout << "Sistema para registrar estudiantes y calcular" << endl;
            cout << "el promedio de sus calificaciones." << endl;
            break;

        case 3:
            cout << "\nSaliendo del programa..." << endl;
            break;

        default:
            cout << "\nOpcion no valida." << endl;
            break;
    }

    return 0;
}

        

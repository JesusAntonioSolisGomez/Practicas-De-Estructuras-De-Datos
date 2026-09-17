
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
            int n;
            float calificacion;
            float suma = 0;
            int aprobadas = 0;
            int reprobadas = 0;
            float mayor;
            float menor;

            cout << "\nIngresa el nombre del estudiante: ";
            cin >> nombre;

            cout << "Cuantas calificaciones deseas registrar? ";
            cin >> n;

            if (n <= 0) {
                cout << "La cantidad de calificaciones debe ser mayor que 0." << endl;
                break;
            }

            for (int i = 1; i <= n; i++) {
                cout << "Ingresa la calificacion " << i << ": ";
                cin >> calificacion;

                suma += calificacion;

                if (calificacion >= 7) {
                    aprobadas++;
                } else {
                    reprobadas++;
                }

                if (i == 1) {
                    mayor = calificacion;
                    menor = calificacion;
                } else {
                    if (calificacion > mayor) {
                        mayor = calificacion;
                    }

                    if (calificacion < menor) {
                        menor = calificacion;
                    }
                }
            }

            float promedio = suma / n;

            cout << "\n=== RESUMEN ===" << endl;
            cout << "Estudiante: " << nombre << endl;
            cout << "Promedio: " << promedio << endl;
            cout << "Calificacion mas alta: " << mayor << endl;
            cout << "Calificacion mas baja: " << menor << endl;
            cout << "Calificaciones aprobatorias: " << aprobadas << endl;
            cout << "Calificaciones reprobatorias: " << reprobadas << endl;

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


        

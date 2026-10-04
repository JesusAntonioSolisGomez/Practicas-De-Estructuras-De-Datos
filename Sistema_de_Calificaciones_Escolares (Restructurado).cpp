#include <iostream>
#include <string>
using namespace std;

void mostrarMenu();
int leerEntero(string mensaje, int min, int max);
float leerCalificacion(int numero);
float calcularPromedio(float suma, int n);
string obtenerEstado(float promedio);
void registrarEstudiante();

 

int main() {
    int opcion;


    do{
    	mostrarMenu();
    	opcion = leerEntero("Opcion: ", 1, 3);

    	switch (opcion) {

        case 1:
        	registrarEstudiante();
        	break;
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
    
	} while (opcion !=3);

    return 0;
}

void mostrarMenu() {
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
}
 
// NIVEL 5 - while: valida el entero hasta que este en el rango
int leerEntero(string mensaje, int min, int max) {
    int valor;
 
    cout << mensaje;
    cin >> valor;
 
    while (valor < min || valor > max) {
        cout << "Valor invalido. Intenta de nuevo: ";
        cin >> valor;
    }
    return valor;
}
 
// NIVEL 5 - while: valida la calificacion (rango 0-10)
float leerCalificacion(int numero) {
    float calificacion;
 
    cout << "ingresa la calificacion " << numero << ":";
    cin >> calificacion;
 
    while (calificacion < 0 || calificacion > 10) {
        cout << "Calificacion invalida (0-10). Intenta de nuevo: ";
        cin >> calificacion;
    }
    return calificacion;
}
 
float calcularPromedio(float suma, int n) {
    return suma / n;
}
 
string obtenerEstado(float promedio) {
    if (promedio >= 9) {
        return "EXCELENTE";
    } else if (promedio >= 7) {
        return "APROBADO";
    } else {
        return "REPROBADO";
    }
}
 
void registrarEstudiante() {
    string nombre;
    int edad;
    int n;
    float calificacion;
    float suma = 0;
    int aprobadas = 0;
    int reprobadas = 0;
    float mayor;
    float menor;
 
    cout << "\nIngresa el nombre del estudiante: ";
    cin >> nombre;
 
    edad = leerEntero("Ingresa la edad del estudiantes:", 0, 120);
 
    n = leerEntero("Cuantas calificaciones deseas registrar? ", 1, 100);
 
    for (int i = 1; i <= n; i++) {
        calificacion = leerCalificacion(i);
 
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
 
    float promedio = calcularPromedio(suma, n);
 
    cout << "\n=== RESUMEN ===" << endl;
    cout << "Estudiante: " << nombre << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << obtenerEstado(promedio) << endl;
    cout << "Calificacion mas alta: " << mayor << endl;
    cout << "Calificacion mas baja: " << menor << endl;
    cout << "Calificaciones aprobatorias: " << aprobadas << endl;
    cout << "Calificaciones reprobatorias: " << reprobadas << endl;
    cout << endl;
}
 

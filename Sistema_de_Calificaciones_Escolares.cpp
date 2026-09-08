#include <iostream>
#include <string>

using namespace std;

int main() {

// Variables
string nombre;
int edad;
float calificacion1, calificacion2, calificacion3;
float promedio;

// Solicitar datos
cout << "Sistema de Calificaciones Escolares" << endl;

cout << "Ingrese el nombre del estudiante: ";
cin >> nombre;

cout << "Ingrese la edad del estudiante: ";
cin >> edad;

cout << "Ingrese la primera calificacion: ";
cin >> calificacion1;

cout << "Ingrese la segunda calificacion: ";
cin >> calificacion2;

cout << "Ingrese la tercera calificacion: ";
cin >> calificacion3;

// Calcular promedio
promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

// Mostrar resumen
cout << endl;
cout << "===== RESUMEN =====" << endl;
cout << "Nombre: " << nombre << endl;
cout << "Edad: " << edad << endl;
cout << "Calificacion 1: " << calificacion1 << endl;
cout << "Calificacion 2: " << calificacion2 << endl;
cout << "Calificacion 3: " << calificacion3 << endl;
cout << "Promedio: " << promedio << endl;

return 0;

}

        
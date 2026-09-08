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

// Validar edad
if (edad < 0 || edad > 120) {
    cout << "Edad invalida" << endl;
    return 1;
}

cout << "Ingrese la primera calificacion: ";
cin >> calificacion1;

cout << "Ingrese la segunda calificacion: ";
cin >> calificacion2;

cout << "Ingrese la tercera calificacion: ";
cin >> calificacion3;

// Validar calificaciones
if (calificacion1 < 0 || calificacion1 > 10 ||
    calificacion2 < 0 || calificacion2 > 10 ||
    calificacion3 < 0 || calificacion3 > 10) {

    cout << "Error: las calificaciones deben estar entre 0 y 10." << endl;
    return 1;
}

// Calcular promedio
promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

// Determinar estado
string estado;

if (promedio >= 9) {
    estado = "EXCELENTE";
}
else if (promedio >= 7) {
    estado = "APROBADO";
}
else if (promedio >= 6) {
    estado = "REGULAR (aprobado con lo minimo)";
}
else {
    estado = "REPROBADO";
}

// Mostrar resumen
cout << endl;
cout << "===== RESUMEN =====" << endl;
cout << "Nombre: " << nombre << endl;
cout << "Edad: " << edad << endl;
cout << "Calificacion 1: " << calificacion1 << endl;
cout << "Calificacion 2: " << calificacion2 << endl;
cout << "Calificacion 3: " << calificacion3 << endl;
cout << "Promedio: " << promedio << endl;
cout << "Estado: " << estado << endl;

return 0;


}


        

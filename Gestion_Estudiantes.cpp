#include <iostream>
#include <fstream> // Manejo de archivos (ifstream, ofstream)
#include <string>

using namespace std;

int main() {
    string nombre, carrera, linea;
    int edad, opcion;
    float promedio;

    do {
        cout << "\n========================================" << endl;
        cout << "   SISTEMA DE GESTION - SOFTWARE UTA    " << endl;
        cout << "========================================" << endl;
        cout << "1. Registrar Estudiante" << endl;
        cout << "2. Visualizar Reporte General" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cin.ignore();
                cout << "Ingrese nombre completo: ";
                getline(cin, nombre);
                cout << "Ingrese carrera: ";
                getline(cin, carrera);

                do {
                    cout << "Ingrese edad: ";
                    cin >> edad;
                    if (edad <= 0) cout << "Error: Edad no valida." << endl;
                } while (edad <= 0);

                do {
                    cout << "Ingrese promedio (0.0 - 10.0): ";
                    cin >> promedio;
                    if (promedio < 0 || promedio > 10)
                        cout << "Error: Promedio fuera de rango." << endl;
                } while (promedio < 0 || promedio > 10);

                // Escritura de datos (Persistencia)
                ofstream archivoSalida;
                archivoSalida.open("estudiantes.txt", ios::app);
                if (archivoSalida.is_open()) {
                    archivoSalida << "Nombre: " << nombre << " | "
                                 << "Edad: " << edad << " | "
                                 << "Carrera: " << carrera << " | "
                                 << "Promedio: " << promedio << endl;
                    archivoSalida.close();
                    cout << "\n[OK] Registro guardado correctamente." << endl;
                } else {
                    cout << "[Error] No se pudo abrir el archivo." << endl;
                }
                break;
            }

            case 2: {
                // Nueva Funcionalidad: Visualizar Reporte
                ifstream archivoLectura;
                archivoLectura.open("estudiantes.txt");

                cout << "\n--- REPORTE GENERAL DE ESTUDIANTES ---" << endl;

                if (archivoLectura.is_open()) {
                    bool hayDatos = false;
                    while (getline(archivoLectura, linea)) {
                        cout << linea << endl;
                        hayDatos = true;
                    }

                    if (!hayDatos) {
                        cout << "El archivo esta vacio o no tiene registros." << endl;
                    }

                    archivoLectura.close();
                } else {
                    cout << "[Aviso] No existe un archivo de registros aun." << endl;
                }
                cout << "---------------------------------------" << endl;
                break;
            }

            case 3:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    return 0;
}

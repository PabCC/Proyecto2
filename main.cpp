#include <iostream>
#include <fstream>
#include <sstream> // Para usar stringstream
#include <vector>

using namespace std;



struct Estudiante {
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string codigoEstudiante;
    string CI;
};

void mostrarContenidoCSV(const string& archivo) {
    ifstream archivoCSV(archivo);

    if (!archivoCSV.is_open()) {
        cout << "No se pudo abrir el archivo " << archivo << endl;
        return;
    }

    vector<Estudiante> estudiantes;
    string linea;

    // Ignorar la primera línea (encabezados)
    getline(archivoCSV, linea);

    while (getline(archivoCSV, linea)) {
        stringstream ss(linea);
        string token;
        vector<string> tokens;

        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        // Verificar si hay suficientes elementos en la línea
        if (tokens.size() == 5) {
            Estudiante estudiante{
                tokens[0], // Nombre
                tokens[1], // Apellido Paterno
                tokens[2], // Apellido Materno
                tokens[3], // Codigo Estudiante
                tokens[4]  // CI
            };

            estudiantes.push_back(estudiante);
        }
    }

    // Mostrar el contenido por consola
    for (const auto& estudiante : estudiantes) {
        cout << "Nombre: " << estudiante.nombre << ", "
             << "Apellido Paterno: " << estudiante.apellidoPaterno << ", "
             << "Apellido Materno: " << estudiante.apellidoMaterno << ", "
             << "Codigo Estudiante: " << estudiante.codigoEstudiante << ", "
             << "CI: " << estudiante.CI << endl;
    
            cout << endl;  // Agregar una línea en blanco entre estudiantes

    }

    archivoCSV.close();
}



void mostrarMenuColegio1() {
    int curso;
    do {
        cout << "\nCursos disponibles en La Salle " << endl;
        cout << "1. Curso 1" << endl;
        cout << "2. Curso 2" << endl;
        cout << "3. Curso 3" << endl;
        cout << "4. Curso 4" << endl;
        cout << "5. Curso 5" << endl;
        cout << "6. Curso 6" << endl;
        cout << "0. Volver al menú principal" << endl;

        cout << "Ingrese el número de la opción deseada: ";
        cin >> curso;

        switch (curso) {
            case 1:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/1.csv");
                break;
            case 2:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/2.csv");
                break;
            case 3:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/3.csv");
                break;
            case 4:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/4.csv");
                break;
            case 5:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/5.csv");
                break;
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_La_Salle/6.csv");
                break;
            case 0:
                cout << "Volviendo al menú principal." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese un número válido." << endl;
        }
    } while (curso != 0);
}

void mostrarMenuColegio2() {
  int curso;
    do {
        cout << "\nCursos disponibles en Santo " << endl;
        cout << "1. Curso 1" << endl;
        cout << "2. Curso 2" << endl;
        cout << "3. Curso 3" << endl;
        cout << "4. Curso 4" << endl;
        cout << "5. Curso 5" << endl;
        cout << "6. Curso 6" << endl;
        cout << "0. Volver al menú principal" << endl;

        cout << "Ingrese el número de la opción deseada: ";
        cin >> curso;

        switch (curso) {
            case 1:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/1.csv");
                break;
            case 2:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/2.csv");
                break;
            case 3:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/3.csv");
                break;
            case 4:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/4.csv");
                break;
            case 5:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/5.csv");
                break;
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en Colegio Santo" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Santo/6.csv");
                break;
            case 0:
                cout << "Volviendo al menú principal." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese un número válido." << endl;
        }
    } while (curso != 0);

}

void mostrarMenuColegio3() {
      int curso;
    do {
        cout << "\nCursos disponibles en La Vento " << endl;
        cout << "1. Curso 1" << endl;
        cout << "2. Curso 2" << endl;
        cout << "3. Curso 3" << endl;
        cout << "4. Curso 4" << endl;
        cout << "5. Curso 5" << endl;
        cout << "6. Curso 6" << endl;
        cout << "0. Volver al menú principal" << endl;

        cout << "Ingrese el número de la opción deseada: ";
        cin >> curso;

        switch (curso) {
            case 1:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/1.csv");
                break;
            case 2:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/2.csv");
                break;
            case 3:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/3.csv");
                break;
            case 4:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/4.csv");
                break;
            case 5:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/5.csv");
                break;
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en el Colegio Ventos" << endl;
                mostrarContenidoCSV("/home/mycom/proyecto2/Colegio_Ventos/6.csv");
                break;
            case 0:
                cout << "Volviendo al menú principal." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese un número válido." << endl;
        }
    } while (curso != 0);

}

int main() {
    int opcion;

    do {
        cout << "Colegios disponibles: " << endl;

        cout << "1. Colegio La Salle" << endl;
        cout << "2. Colegio Santo" << endl;
        cout << "3. Colegio Vento" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingrese el número de la opción deseada: ";
        cin >> opcion;

        switch (opcion) {
            
            case 1:
                cout << "Ha seleccionado La Salle " << endl;
                mostrarMenuColegio1();
                break;
            case 2:
                cout << "Ha seleccionado  Santo " << endl;
                mostrarMenuColegio2();
                break;
            case 3:
                cout << "Ha seleccionado  Ventos" << endl;
                mostrarMenuColegio3();
                break;
            case 0:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese un número válido." << endl;
        }

    } while (opcion != 0);

    return 0;
}

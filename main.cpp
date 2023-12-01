#include <iostream>
#include <fstream>

using namespace std;


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
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
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
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
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
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                cout << "Ha seleccionado el Curso " << curso << " en La Salle" << endl;
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

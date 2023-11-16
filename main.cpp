#include <iostream>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "Colegios disponibles: " << endl;

        cout << "2. Colegio 1" << endl;
        cout << "3. Colegio 2" << endl;
        cout << "4. Colegio 3" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingrese el número de la opción deseada: ";
        cin >> opcion;

        switch (opcion) {
            
            case 1:
                cout << "Ha seleccionado 'Colegio 1'" << endl;
                break;
            case 2:
                cout << "Ha seleccionado 'Colegio 2'" << endl;
                break;
            case 3:
                cout << "Ha seleccionado 'Colegio 3'" << endl;
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

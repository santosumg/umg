//promedio de calificaciones
//Brandon Santos 3490-23-15808

#include <iostream>
using namespace std;

int main() {
    int cantidad;
    
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidad;
    
    int calificaciones[cantidad];
    
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la calificación " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += calificaciones[i];
    }
    
    int promedio = suma / cantidad;

    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
    
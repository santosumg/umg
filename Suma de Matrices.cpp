//Suma de Matrices
//Brandon Santos 3490-23-15808
//Segundo Parcial 24/09/2023

#include <iostream>

using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int c = 0; c < columnas; c++) {
            cout << "Ingrese el elemento (" << i + 1 << "," << c + 1 << "): ";
            cin >> matriz1[i][c];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int c = 0; c < columnas; c++) {
            cout << "Ingrese el elemento (" << i + 1 << "," << c + 1 << "): ";
            cin >> matriz2[i][c];
        }
    }
    
    for (int i = 0; i < filas; i++) {
        for (int c = 0; c < columnas; c++) {
            resultado[i][c] = matriz1[i][c] + matriz2[i][c];
        }
    }
    
    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int c = 0; c < columnas; c++) {
            cout << resultado[i][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

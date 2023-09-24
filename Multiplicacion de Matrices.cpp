//Multiplicacion de Matrices
//Brandon Santos 3490-23-15808
//Segundo Parcial 24/09/2023

#include <iostream>

using namespace std;

int main() {
    int filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;

    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filasMatriz1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnasMatriz1;

    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filasMatriz2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnasMatriz2;

    if (columnasMatriz1 != filasMatriz2) {
        cout << "Error: Las matrices no se pueden multiplicar debido a dimensiones." << endl;
        return 1;
    }

    int matriz1[filasMatriz1][columnasMatriz1];
    int matriz2[filasMatriz2][columnasMatriz2];
    int resultado[filasMatriz1][columnasMatriz2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz1; j++) {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filasMatriz2; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnasMatriz1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


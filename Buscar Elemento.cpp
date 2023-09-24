//Buscar un elemento
//Brandon Santos 3490-23-15808
//Segundo Parcial 24/09/2023 11:28am

#include<iostream>
using namespace std;

int main() {
    int dato;
    
    cout << "Ingrese el dato:" << endl;
    cin >> dato;
    
    int arreglo[10] = {4, 67, 90, 6, 56, 8, 89, 75, 6, 21};
    
    bool flag = false;
    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == dato) {
            cout << "Dato existe" << endl;
            flag = true;
        }
    }
        if (flag == false) {
            cout << "-1"<< endl;
        }
}
    
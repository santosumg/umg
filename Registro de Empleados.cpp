//Registro de Empleados
//Brandon Santos 3490-23-15808
//Segundo Parcial 24/09/2023

#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    int salario;
    string departamento;
};

int main() {
    int numEmpleados;

    cout << "Ingrese el número de empleados: ";
    cin >> numEmpleados;

    Empleado empleados[numEmpleados];

    for (int i = 0; i < numEmpleados; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin >> empleados[i].nombre;
        cout << "Ingrese el salario del empleado, solo numeros " << i + 1 << ": ";
        cin >> empleados[i].salario;
        cout << "Ingrese el departamento del empleado " << i + 1 << ": ";
        cin >> empleados[i].departamento;
    }

    string departamentoBuscado;
    cout << "Ingrese el departamento: ";
    cin >> departamentoBuscado;

    cout << "Empleados en el departamento " << departamentoBuscado << ":" << endl;
    for (int i = 0; i < numEmpleados; i++) {
        if (empleados[i].departamento == departamentoBuscado) {
            cout << "Nombre: " << empleados[i].nombre << ", Salario: " << empleados[i].salario << endl;
        }
    }

    return 0;
}

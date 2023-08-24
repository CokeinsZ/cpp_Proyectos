#include <iostream>
using namespace std;

int BuscarElemento(int[], int, int);


int main() {
    
    int tamano, elemento, pos;

    cout << "Ingrese el tama�o del arreglo \n";
    cin >> tamano;
    
    int arr[tamano] = { 0 };

    cout << "Ingrese los valores del arreglo \n";
    for (int i = 0; i < tamano; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el elemento a buscar \n";
    cin >> elemento;

    pos = BuscarElemento(arr, tamano, elemento);

    cout << "Elemento encontrado en la posición: " << pos << endl;

    return 0;
}

int BuscarElemento(int arreglo[], int tamano, int elemento) {
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == elemento) {
            return i;
        }
    }

    //Si el if nunca es true, se ejecuta lo siguiente
    return -1;
}

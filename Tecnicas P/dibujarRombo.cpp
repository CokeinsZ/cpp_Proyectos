#include <iostream>
#include <cmath> // Para usar la función abs()
using namespace std;

void llenarMatriz(char matriz[100][100], int n) {
    int medio = n / 2; // El valor medio de la matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        // Si el valor absoluto de la resta entre los índices es igual al valor medio, se asigna un asterisco
        if (abs(i - j) == medio || abs(i + j - n + 1) == medio) {
            matriz[i][j] = '*';
        } else {
            matriz[i][j] = ' ';
        }
        }
    }
}

void imprimirMatriz(char matriz[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    //Sigue pidiendo un numero hasta que se le de uno que sea positivo e impar
    do {
        cout << "Ingrese el tamaño de la matriz (debe ser un número impar y mayor que 1): \n";
        cin >> n;
    } while (n <= 1 || n % 2 == 0);

    char matriz[100][100];
    llenarMatriz(matriz, n);
    imprimirMatriz(matriz, n);

    return 0;
}

// Author: Mauricio AlbaCastro
// malba@autonoma.edu.co

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;


void imprimeMatriz(int matriz[100][100], int numFilas, int numColumnas);
// PRE: 0<= numFilas <= 100 && 0<=numColumnas <= 100
// POST: 

void imprimeMatrizChar(char matriz[100][100], int numFilas, int numColumnas);

void leeMatriz(int matriz[100][100], int numFilas, int numColumnas);
// PRE: 0<= numFilas <= 100 && 0<=numColumnas <= 100
// POST:

void dibujaMatriz(char matriz[100][100], int numFilas, int numColumnas);

int centinelaMinimo = numeric_limits<int>::min();
int centinelaMaximo = numeric_limits<int>::max();

int main() {
    int m, n;

    cout << "Ingrese el número de filas de la matriz ";
    cin >> m;
    cout << "Ingrese el número de columnas de la matriz ";
    cin >> n;

    char matriz[100][100];
    
    dibujaMatriz(matriz, m, n);

    imprimeMatrizChar(matriz, m, n);

}

void leeMatriz(int matriz[100][100], int numFilas, int numColumnas)
{

  for(int fila=0; fila<numFilas; fila++)
  {
    cout << "Leyendo fila " << fila << " "<<endl;
    for(int col=0; col<numColumnas; col++)
    {
       cout << " [ "<<fila<< "] [" << col<< "] = ";
       cin>> matriz[fila][col];
    }

  }
  cout <<endl;
}


void imprimeMatriz(int matriz[100][100], int numFilas, int numColumnas)
{
  char separador =' ';
  for(int fila=0; fila<numFilas; fila++)
  {
    // cout << "Imprimiendo fila " << fila << " "<<endl;
    cout << " [";
    for(int col=0; col<numColumnas; col++)
    {
       //cout << " ["<<fila<< "] [" << col<< "] ";
       cout << setw( 4 )<< matriz[fila][col] ;
       separador = (col == numColumnas -1 )?  ' ' :  ',';
       cout << separador;
    }
    cout << "] " << endl;
  }
}

void imprimeMatrizChar(char matriz[100][100], int numFilas, int numColumnas) {
  for(int fila=0; fila<numFilas; fila++)
  {
    cout << " [";
    for(int col=0; col<numColumnas; col++)
    {
       cout << setw( 2 )<< matriz[fila][col];
    }
    cout << " ]" << endl;
  }
}


void dibujaMatriz(char matriz[100][100], int numFilas, int numColumnas) {
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumnas; j++) {
            if (i == 0 || j == 0 || i == numFilas-1 || j == numColumnas-1) {
                matriz[i][j] = '*';
            } else {
              matriz[i][j] = ' ';
            }
    
        }
    }
}


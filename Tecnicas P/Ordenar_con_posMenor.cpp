#include <iostream>
#include <limits>

using namespace std;

void ordenarArregloAscendente(int[], int);

int posMenor (int [], int );

void leeVector(int [], int );
void imprimeVector(int [], int );
int centinelaMinimo = numeric_limits<int>::min();
int centinelaMaximo = numeric_limits<int>::max();

int main ()
{
    int n;
    cout <<"Tamano del vector "<<endl;
    cin >> n;
    int a[n];
    leeVector(a,n);
    cout << "Vector ingresado:  "<< endl;
    imprimeVector(a,n);

    ordenarArregloAscendente(a, n);

    cout << "Vector ordenado: " << endl;
    imprimeVector(a, n);

}


void leeVector(int a[], int n)  {

    for (int i=0; i<n; i++)
    {
        cout << "Ingrese Valor de posicion "<<i<< " "<<endl;
        cin>> a[i];
    }
    cout << endl; 
}

void imprimeVector(int a[], int n) {

 for (int i=0; i<n; i++)
    {
        cout << "Valor en la posicion "<<i<< " "<< a[i]<< endl;
    }
    cout << endl;

}

int posMenor(int a[], int n)
{
  int menor = centinelaMaximo;
  int posicionMenor = -1;
  for (int i=0; i<n; i++)
    {
        if (menor > a[i])
        {
           menor = a[i];
           posicionMenor = i;
        };
    }
    // cout << "Con   "<< n<< " numeros"<< endl;
    // cout << " menor   "<<menor<<endl;
    // cout << " posicion " <<posiMenor<< endl;
    return posicionMenor;
}

void ordenarArregloAscendente (int a[], int n) {
    int posMen = 0, aux = 0;

    for (int i = 0; i < n; i++) {
        posMen = posMenor(a + i, n - i);

        aux = a[i];
        a[i] = a[posMen + i];
        a[posMen + i] = aux;
    }

}

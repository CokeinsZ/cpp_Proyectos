#include <iostream>
#include <limits>

using namespace std;


int posMayor (int [], int );
void ordenar (int a[], int n);


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

    ordenar(a, n);

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

int posMayor(int a[], int n)
{
  int mayor = centinelaMinimo;
  int posicionMayor = -1;
  for (int i=0; i<n; i++)
    {
        if (mayor <= a[i])
        {
           mayor = a[i];
           posicionMayor = i;
        };
    }
    // cout << "Con   "<< n<< " numeros"<< endl;
    // cout << " mayor   "<<mayor<<endl;
    // cout << " posicion " <<posiMayor<< endl;
    return posicionMayor;
}

void ordenar (int a[], int n) {
    int posM = 0, aux = 0;
    while (n >= 0) {
        posM = 0;
        posM = posMayor(a, n);

        aux = a[n-1];
        a[n-1] = a[posM];
        a[posM] = aux;

        n--;
    }
}



// AUTOR: MAURICIO ALBA CASTRO
// malba@autonoma.edu.co
// 

#include <iostream>
#include <limits>

using namespace std;


int posMayor (int [], int );
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

    int posicionMayor = posMayor( a,  n);
    cout << "Mayor " << a[posicionMayor] << "   en posicion "<< posicionMayor;


    int posicionMenor = posMenor( a,  n);
    cout << "Menor " << a[posicionMenor] << "  en posicion "<< posicionMenor;


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
        cout << "Valor en la posicion "<<i<< " "<<endl;
        cout <<a[i]<<endl;
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

int posMenor(int a[], int n)
{
  int menor = centinelaMaximo;
  int posicionMenor = -1;
  for (int i=0; i<n; i++)
    {
        if (menor >= a[i])
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


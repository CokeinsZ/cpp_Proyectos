// mauricio alba
// ineficiente
#include <iostream>
using namespace std;

void leeVector(int a[], int n)  {

    for (int i=0; i<n; i++)
    {
        cout << "Ingrese Valor de posicion "<<i<< " "<<endl;
        cin>> a[i];
    }
    cout << endl; 
}

int buscaNumero(int a[], int n, int numero) {
     bool bandera= false;
     int posicion;
     for (int i = 1; i <= n; i++)
    {
        if (numero ==a[i])
        {
            bandera = true;
            posicion = i;
        }
        if (i==n && bandera==false)
        {
            
            posicion = -1;;
        }
   }
   return posicion;
}


int main(){
    int numero, n;
    cout<<"La dimension del vector: ";cin>>n;
    int vector[n];

    leeVector(vector,n);

    cout<<"Numero a buscar: ";
    cin>>numero;
    cout <<endl << "Posicion : " << buscaNumero(vector,n,numero)<<endl;

}
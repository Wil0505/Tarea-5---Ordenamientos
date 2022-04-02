#include<iostream>
#include<conio.h>

using namespace std;

void OrdMetBurbuja();

int main(){
	
	OrdMetBurbuja();
	
	getch();
	return 0;
}

void OrdMetBurbuja(){
	int f;
	int v[100];
	int aux=0;
	
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;
	
	//Pedirle al usuario que ingrese el entero que desee
	for(int i=0;i<f;i++){
		cout<<"Indique el numero entero: ";
		cin>>v[i];
	}
	
	//Algoritmo del metodo burbuja
	for(int i=0;i<f;i++){
		for(int j=0;j<f;j++){
			if(v[j]>v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
	
	cout<<endl;
	
	//Imprimiendo los numeros ordenados por el metodo burbuja
	for(int i=0;i<f;i++){
		cout<<v[i]<<" ";
	}
}

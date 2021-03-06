#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void OrdMetBurbuja();
void OrdShakerSort();
void OrdPorSeleccion();
void OrdPorInsercion();
void BusqSecue();
void BusqBinaria();

int main(){
	int opc;
	char opcion='1';
	
	while (opcion=='1')
	{
		system("cls");
		cout<<endl;
		cout<<"ORDENAMIENTO"<<endl<<endl;
		cout<<" 1. Ordenamiento Burbuja "<<endl;
		cout<<" 2. Ordenamiento Shaker Sort"<<endl;
		cout<<" 3. Ordenamiento Seleccion Directa"<<endl;
		cout<<" 4. Ordenamiento Insercion"<<endl;
		cout<<" 5. Busqueda Secuencial"<<endl;
		cout<<" 6. Busqueda Binaria"<<endl<<endl;
		cout<<"Ingrese una opcion:  ";
		cin>>opc;
		
		while(opc<0||opc>10)
		{
			cout<<"\n\t\t\t\tOpcion Invalida"<<endl;
			cout<<"\t\t\t\tIngrese una opcion:  ";
			cin>>opc;
		}
		
		switch (opc)
		{
			case 1:
				OrdMetBurbuja();
			break;
			
			case 2:
				OrdShakerSort();
			break;
			
			case 3:
				OrdPorSeleccion();
			break;
				
			case 4:
				OrdPorInsercion();
			break;
			
			case 5:
				BusqSecue();
			break;
			
			case 6:
				BusqBinaria();
			break;
		}
		
		cout<<"\n\nPresione '1' para volver al menu "<<endl;
		cout<<"Presione '2' para salir ";
		cout<<"\n\n";
		cin>>opcion;
	}
	
	getch();
	return 0;
}

void OrdMetBurbuja(){
	system("cls");
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

void OrdShakerSort(){
	system("cls");
    int k, r, l, aux, f, v[100];
    
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;
	
	k=f;
	l=1;
	r=f-1;
	
	//Pedirle al usuario que ingrese el entero que desee
	for(int i=0;i<f;i++){
		cout<<"Indique el numero entero: ";
		cin>>v[i];
	}
	
	//Algoritmo de Ordenamiento Shaker Sort
    do{
    	//Ordenamiento de Derecha a Izquierda
        for(int i=r;i>=l;i--){
            if(v[i-1]>v[i]){
                aux=v[i-1];
                v[i-1]=v[i];
                v[i]=aux;
                k=i;
            }
		}
    
        l=k+1;
        
        //Ordenamiento de Izquierda a Derecha
        for(int i=l;i<=r;i++){
            if(v[i-1]>v[i]){
                aux=v[i-1];
                v[i-1]=v[i];
                v[i]=aux;
                k=i;
            }
        }
        
		r=k-1;
		
    }while(l<r);
        
    cout<<endl;
    
    //Imprimiendo los numeros ordenados por el Shaker Sort
    for(int i=0;i<f;i++){
		cout<<v[i]<<" ";
	}
      
}

void OrdPorSeleccion(){
	system("cls");
	int f;
	int v[100];
	int aux, p;
	
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;
	
	//Pedirle al usuario que ingrese el entero que desee
	for(int i=0;i<f;i++){
		cout<<"Indique el numero entero: ";
		cin>>v[i];
	}
	
	//Algoritmo del Ordenamiento por Insercion
	for(int i=0;i<f;i++){
		p=i;
		aux=v[i];
		
		while((p>0) && (v[p-1]>aux)){
			v[p]=v[p-1];
			p--;
		}
		v[p]=aux;
		
	}
	
	cout<<endl;
	
	//Imprimiendo los numeros ordenados por el metodo de insercion
	for(int i=0;i<f;i++){
		cout<<v[i]<<" ";
	}
	
}

void OrdPorInsercion(){
	system("cls");
	int f;
	int v[100];
	int aux, p;
	
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;
	
	//Pedirle al usuario que ingrese el entero que desee
	for(int i=0;i<f;i++){
		cout<<"Indique el numero entero: ";
		cin>>v[i];
	}
	
	//Algoritmo del Ordenamiento por Insercion
	for(int i=0;i<f;i++){
		p=i;
		aux=v[i];
		
		while((p>0) && (v[p-1]>aux)){
			v[p]=v[p-1];
			p--;
		}
		v[p]=aux;
		
	}
	
	cout<<endl;
	
	//Imprimiendo los numeros ordenados por el metodo de insercion
	for(int i=0;i<f;i++){
		cout<<v[i]<<" ";
	}
	
}

void BusqSecue(){
	system("cls");
	int v[100], f, d, j=0;
	char b= 'F';
	
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;
	
	//Pedirle al usuario que ingrese el entero que desee
	for(int i=0;i<f;i++){
		cout<<"Indique el numero entero: ";
		cin>>v[i];
	}
	
	cout<<endl;
	
	//Pedirle al usuario el entero que busca
	cout<<"Ingrese el numero a buscar: ";
	cin>>d;
	cout<<endl;
	
	//Algoritmo del Busqueda Secuencial
	while((b=='F') && (j<f)){
		if(v[j]==d){
			b='V';
			}
			j++;
		}
			
	cout<<endl;
	
	//Imprimiendo si se encontro el numero y en que posicion
	if(b=='F'){
		cout<<"EL numero que busca no existe en el arreglo"<<endl;
	}
	
	else if(b=='V'){
		cout<<"El numero a sido encontrado en la posicion: "<<j;
	}
}

void BusqBinaria(){
	system("cls");
	int v[100], f, n, d, in, s, m;
	char b= 'F';
	
	//Pedirle la longitud del arreglo al usuario
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>f;
	cout<<endl;

	//Imprimiento el arreglo ordenado
	for(int i=0;i<f;i++){
		cout<<i+1<<" ";
		v[i]=i+1;
	}
	
	cout<<endl<<endl;
	
	//Pedirle al usuario el entero que busca
	cout<<"Ingrese el numero a buscar: ";
	cin>>d;
	cout<<endl;
	
	in=0;
	s=f;
	
	//Algoritmo del Busqueda Binaria
	while(in<=s){
		m=(in+s)/2;
		
		if(v[m]==d){
			b='V';
			break;
		}
		if(v[m]>d){
			s=m;
			m=(in+s)/2;
		}
		if(v[m]<d){
			in=m;
			m=(in+s)/2;
		}
		
	}
	
	//Imprimiendo si se encontro el numero y en que posicion
	if(b=='F'){
		cout<<"EL numero que busca no existe en el arreglo"<<endl;
	}
	
	else if(b=='V'){
		cout<<"El numero a sido encontrado en la posicion: "<<m+1<<endl;
	}

}

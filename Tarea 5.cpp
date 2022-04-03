#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void OrdMetBurbuja();
void OrdShakerSort();
void OrdPorSeleccion();
void OrdPorInsercion();
void BusqSecue();

int main(){
	int opc;
	char opcion='1';
	
	while (opcion=='1')
	{
		system("cls");
		cout<<endl;
		cout<<"ORDENAMIENTO"<<endl<<endl;
		cout<<"1. Ordenamiento Burbuja "<<endl;
		cout<<"2. Ordenamiento Quicksort"<<endl;
		cout<<"3. Ordenamiento Shell Sort"<<endl;
		cout<<"4. Ordenamiento Heap Sort"<<endl;
		cout<<"5. Ordenamiento Merge Sort"<<endl;
		cout<<"6. Ordenamiento Shaker Sort"<<endl;
		cout<<"7. Ordenamiento Seleccion Directa"<<endl;
		cout<<"8. Ordenamiento Insercion"<<endl;
		cout<<"9. Busqueda Secuencial"<<endl;
		cout<<"10. Busqueda Binaria"<<endl<<endl;
		cout<<"Ingrese una opcion:  ";
		cin>>opc;
		
		while(opc<=0||opc>3)
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
				OrdShakerSort();
			break;
		
			case 4:
				OrdShakerSort();
			break;
			
			case 5:
				OrdShakerSort();
			break;
			
			case 6:
				OrdShakerSort();
			break;
			
			case 7:
				OrdPorSeleccion();
			break;
				
			case 8:
				OrdPorInsercion();
			break;
			
			case 9:
				BusqSecue();
			break;
			
			case 10:
				OrdPorInsercion();
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

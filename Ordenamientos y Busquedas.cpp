#include <iostream>
#include <math.h>
#include<conio.h>
#include<stdlib.h>
#define max 10000

using namespace std;

void OrdMetBurbuja();
void OrdShakerSort();
void OrdPorSeleccion();
void OrdPorInsercion();
void BusqSecue();
void BusqBinaria();
void HeapSort();
void MergeSort();
void Oquicksort(int[], int);
void imprime(int[], int);
void Quicksort(int [], int);
void imprimira(int [], int n);
void ShellSort();
void shell(int [], int n);

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
		cout<<" 6. Busqueda Binaria"<<endl;
		cout<<" 7. Ordenamiento HeapSort"<<endl;
		cout<<" 8. Ordenamiento MergeSort"<<endl;
		cout<<" 9. Ordenamiento QuickSort"<<endl;
		cout<<"10. Ordenamiento ShellSort"<<endl<<endl;
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
			case 7:
				HeapSort();
			break;
			case 8:
				MergeSort();
			break;
			case 9:
				QuickSort(int a[], int n);
			break;
			case 10:
				ShellSort();
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

class MinHeap
{
		public:
			int *harr;
			int capacity;
			int heap_size;
			
			MinHeap(int cap)
			{
				heap_size = cap;
				capacity = cap;
				harr = new int[cap];
			}
			
	void imparray()
	{
		for(int i=0; i<heap_size; i++)
			cout<<harr[i]<<" ";
			cout<<endl;
	}	
		int parent(int i)
		{
			return (i-1)/2;
		}
		
		int left(int i)
		{
			return (2*i + 1);
		}
		
		int right(int i)
		{
			return (2*i + 2);
		}
		
		int getMain()
		{
			return harr[0];
		}
		
	void MinHeapify(int i)
	{
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if(l < heap_size && harr[l] < harr[i])
			smallest = l;
		if(r < heap_size && harr[l] < harr[smallest])
			smallest = r;
		if(smallest != i)
		{
			swap(harr[i], harr[smallest]);
			MinHeapify(smallest);
		}
	}
	
	int extractMin()
	{
		if(heap_size <= 0)
			return INT_MAX;
		if(heap_size == 1)
		{
			heap_size--;
			return harr[0];
		}
		
		int root = harr[0];
		harr[0] = harr[heap_size-1];
		heap_size--;
		MinHeapify(0);
		
		return root;
	}
	
	void getUnsortedArray()
	{
		cout << "Ingrese los "<<capacity<<" que desea ingresar: "<<endl;
		for(int i=0; i<capacity; i++)
		cin>>harr[i];
	}
	
	void heap()
	{
		int temp[capacity];
		for(int j=0; j<capacity; j++)
		{
			temp[j]=extractMin();
			cout<<temp[j]<<" ";
		}
	}
};

void HeapSort()
{
	int s;
	cout<<"Ingrese el tamanio"<<endl;
	cin>>s;
	MinHeap obj(s);
	obj.getUnsortedArray();
	
	cout<<"Datos desordenados: "<<endl;
	obj.imparray();
	
	for(int i=s/2-1; i>=0; i--)
	{
		obj.MinHeapify(i);
	}
	
	cout<<"Datos ordenados: "<<endl;
	obj.heap();
}

void merge(int array[], int l, int mid, int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0; i<n1; i++)
	{
		a[i]=array[l+1];
	}
	for(int i=0; i<n2; i++)
	{
		b[i]=array[mid+1+i];
	}
	
	int i=0;
	int j=0;
	int k=l;
	
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			array[k]=a[i];
			k++;
			i++;
		}
		else
		{
		array[k]=b[j];
		k++;
		j++;
		}
	}
	while(i<n1)
	{
		array[k]=a[i];
			k++;
			i++;
	}
	
	while(j<n2)
	{
	array[k]=b[j];
		k++;
		j++;	
	}
}

void Omergesort(int array[], int l, int r)
{
	if(l < r)
	{
		int mid=(l+r)/2;
		Omergesort(array,l,mid);
		Omergesort(array,mid+1,r);
		merge(array,l,mid,r);
	}
}

void Mergesort(int array[], int l, int r)
{
	int array[]={35, 40, 20, 30, 10};
	Omergesort(array,0,4);
	for(int i=0; i<5; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

void Quicksort(int a[], int n)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\nIngrese un Numero "<<i+1<<" : \n-->";
		cin>>a[i];
	}
	
	Oquicksort(a,n);
	imprime(a,n);
}

void imprime(int a[], int tam)
{
	cout<<"\t\tArreglo Ordenado: \n\n";
	
	for(int i=0; i < tam; i++)
	cout<<"\t["<<a[i]<<"] ";
}

void Oquicksort(int a[], int n)
{
	int tope, ini, fin, pos;
	int may[max], men [max];
	tope=0;
	men[tope]=0;
	may[tope]=n-1;
	
	while(tope<=0)
	{
		ini = men[tope];
		fin = may[tope];
		tope--;
		
	int izq, der, aux;
	bool band;
	izq=ini;
	der=fin;
	pos=ini;
	
	band = true;
	
		while(band==true)
		{
			while((a[pos]<a[der]) && (pos != der))
				der--;
			
			if(pos==der)
				band=false;
			else
			{
				aux=a[pos];
				a[pos]=a[der];
				a[der]=aux;
				pos=der;
			}
			while((a[pos]>a[izq]) && (pos != izq))
				izq++;
				
			if(pos==izq)
			  	band=false;
			else
			{
				aux=a[pos];
				a[pos]=a[izq];
				a[izq]=aux;
				pos=izq;
			}
		}
		
		if(ini<=(pos-1))
		{
			tope++;
			men[tope]=ini;
			may[tope]=pos-1;
		}
		
		if(fin>=(pos+1))
		{
			tope++;
			men[tope]=pos+1;
			may[tope]=fin;		
		}
	}
}

void ShellSort(int a[], int n)
{
	int total;
	cout<<"Cuantos numeros ingresara? "<<endl;
	cin>>total;
	int num[total];
	for(int i=0; i<total; i++)
	{
		cout<<"Ingrese los numeros: "<<endl;
		cin>>num[i];
	}
	shell(num,total);
	imprimira(num,total);
	
}

void shell(int a[], int n)
{
	int ints, i, aux;
	bool band;
	
	ints=n;
	
	while(ints>1)
	{
		ints=(ints/2);
		band=true;
		
		while(band==true)
		{
			band=false;
			i=0;
			while((i+ints)<=n)
			{
				if(a[i]>a[i+ints])
				{
					aux=a[i];
					a[i]=a[i+ints];
					a[i+ints]=aux;
					band=true;
				}
				i++;
			}
		}
	}
}

void imprimira(int a[], int n)
{
	cout<<"Numeros ordenados: "<<endl;
	
	for(int i=0; i<n; i++)
	cout<<"[ "<<a[i]<<" ]";
}

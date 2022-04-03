#include <iostream>
#define max 10000

using namespace std;

void Oquicksort(int[], int);
void imprime(int[], int);

int main()//Quicksort
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

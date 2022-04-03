#include <iostream>

using namespace std;

void imprimira(int [], int n);
void shell(int [], int n);

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

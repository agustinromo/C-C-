#include <iostream> 
#include <conio.h> 
using namespace std; 
int n1,n2;  
int comparador(int n1,int n2);
int main()
{ 
	cout<<"Ingresa dos numeros\n";
	cin>>n1>>n2; 
	comparador(n1,n2); 
	getch(); 
} 
int comparador(int n1,int n2) 
{
	if(n1==n2)
	{
		cout<<"Los numeros no deben ser iguales\n";
	} 
	else if(n1<n2)
	{
		cout<<n2-1;
	} 
	else 
	{
		cout<<n1-1;
	}
}

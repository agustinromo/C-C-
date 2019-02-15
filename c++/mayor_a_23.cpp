#include <iostream> 
#include <conio.h> 
using namespace std; 
int n1; 
int comparador(int n1);
int main()
{
	cout<<"Ingresa un numero mayor a 23\n";  
	cin>>n1; 
	comparador(n1); 
	getch();
} 
int comparador(int n1)
{
	if(n1==23 || n1<23)
	{
		cout<<"no mames\n";
	} 
	else if(n1>23)
	{
		if(n1%2==0)
		{
			cout<<"PAR\n";
		}
		else  
		{
			cout<<"IMPAR\n"; 
	    } 
    }
}

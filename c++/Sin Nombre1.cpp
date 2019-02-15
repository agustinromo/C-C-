#include <iostream>
#include <conio.h> 
using namespace std; 
int n1,i; 
int may[5]; 
int men[5];
int mayor(int n1); 
int menor(int n1); 
int main()
{
	cout<<"Dame un numero\n"; 
	cin>>n1; 
	mayor(n1); 
	getch();
} 
int mayor(int n1) 
{ 
    for(i=0;i<5;i++) 
    {  
		cout<<may[i];
	}
}

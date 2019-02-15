#include <iostream>
#include <conio.h>
using namespace std;
int validar();
int age;
char sex;
int main()
{
	cout<<"Cual es su genero\n";
	cin>>sex; 
	cout<<"Cual es su edad\n";
	cin>>age;
	validar();
	getch();
} 
int validar()
{
	if(sex == 'M' or sex =='F')
	{
		if(age > -1 and age < 80)
		{
		   	cout<<"Sus datos son validos";	
		}
		else
		 {
	 	   cout<<"Mal todo";
	 }
	}
	 else
	 {
	 	cout<<"Mal todo";
	 }
}

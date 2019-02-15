#include <iostream> 
using namespace std; 
int u;
int var; 
int precio,descuento;
int pedido();
int total();
int main()
{
	pedido();
	total(); 
}
int pedido()
{
	cout<<"Cuantos drones vas a querer\n";  
	cin>>u; 
}
int total()
{
	var = u*1000;
	if(var > 6000 and var == 12000)
	{
		descuento=(4*var)/100;
		precio=var-descuento;
		cout<<"Tu total es de: "<<precio<<" Con un ahorro de: "<<descuento<<endl; 
	}
	else if(var <= 6000)
	{
		//descuento=(4*var)/100;
		precio=var;
		cout<<"Tu total es de: "<<precio<<endl; 
	} 
	else 
	{
		descuento=(10*var)/100;
		precio=var-descuento;
		cout<<"Tu total es de: "<<precio<<" Con un ahorro de: "<<descuento<<endl; 
	}

}

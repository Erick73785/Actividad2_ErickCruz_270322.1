#include <iostream> 
#include <conio.h>
#include <string.h>
using namespace std; 

int main (void)
{
	int frase=0;
	char cadena [100];
	printf("Ingrese la cadena; ");
	gets(cadena);
	
	frase = strlen(cadena);
	cout<<"El numero de elementos de la cadena es: "<<frase<<endl;
	
	getch();
	return 0;
}

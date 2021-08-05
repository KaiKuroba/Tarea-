#include <conio.h>
#include <stdio.h>
#include <cstdio>
using namespace std;


int main(void)
{
	char usuario[20];
	
	printf( "Introduzca su nombre estimado usuario: " );
	scanf( "%s", usuario );
	printf( "Hola %s, Iniciaremos el  sistema ordinal.", usuario, 161 );
	int opc = 0, num1 = 0, num2 = 0;
	do{
		("cls");
		printf( " Menu Ordinal Scarlet Elija Una Opcion Para Empezar\n");
		printf("1 Sistema De Rastreo \n");
		printf("2 Busqueda De Lugares \n");
		printf("3 Busqueda De Musica \n");
		printf("4 Cerrar Sistema Ordinal Scarlet\n");
		printf(" Escoge una opcion usuario:");
		scanf ("%d", &opc);
		switch(opc) {
	
		} 
	} while(opc  = 4 );
	return 0;
}





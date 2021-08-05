#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int main(int argc, char *argv[]) {
	
	
	char usuario[20];
	char repetir = TRUE;
	
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
		
		switch(opc){
			system("cls");
		case 1:
			printf( " opcion no disponible\n");
			break;
		case 2:
			printf( " Lugar no encontrado\n");
			break;
		case 3:
			printf( " Buscando musica \n");
			break;
		case 4:
			repetir = FALSE;
			break;
		}
		
	} while(repetir);
	
	return 0;
}


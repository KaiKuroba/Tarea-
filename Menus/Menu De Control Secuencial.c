#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char usuario[20];
	
	
	printf( "Introduzca su nombre estimado usuario: " );
	scanf( "%s", usuario );
	printf( "Hola %s, Iniciaremos el  sistema ordinal.", usuario, 161 );
	int opc = 0, num1 = 0, num2 = 0;
	do{
		system("cls");
		("cls");
		printf( " Menu Ordinal Scarlet Elija Una Opcion Para Empezar\n");
		printf("1 Sistema De Rastreo \n");
		printf("2 Busqueda De Lugares \n");
		printf("3 Busqueda De Musica \n");
		printf("4 Cerrar Sistema Ordinal Scarlet\n");
		printf(" Escoge una opcion usuario:");
		scanf ("%d", &opc);
		
		switch(opc){
			
		case 1:
			printf( " Lugar no encontrado por favor habilite el gps\n");
			break;
		case 2:
			printf( " Lugar no encontrado\n");
			break;
		case 3:
			printf( " Buscando musica \n");
			printf("10% \n");
			printf("20% \n");
			printf("30% \n");
			printf("40% \n");
			printf("50% \n");
			printf("60% \n");
			printf("70% \n");
			printf("80% \n");
			printf("90% \n");
			printf("100% \n");
			printf("Musica encontrada\n");
			break;
		case 4:
			
			break;
		}
		
	} while( 4);
	return 0;
}


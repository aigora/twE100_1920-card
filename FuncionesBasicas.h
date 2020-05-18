// Funciones generales
#include <stdio.h>
#include <stdlib.h>

void FCierre (void);
void FPresentacion (void);
char FEleccion (void);
char FRepetir (void);
void FCierre (void);
float PedirFloat (void);

// Funciones:
void FPresentacion (void)//Esta funcion da una presentacion a tu programa 
{
	puts ("\t\255\255Bienvenidos a nuestra timba de poker!!\n");
	puts ("\tPor: CARD");
	puts ("\tJugaremos con la baraja completa de Poker, sin comodines:");
	puts ("\tPalos:");
	puts ("\tCorazones (C), Diamantes (D), Picas (P) y Tr\202boles (T)\n");
	puts ("\tValores:");
	puts ("\tAs (A), Dos (2), Tres (3), Cuatro (4), Cinco (5), Seis (6), Siete (7), Ocho (8), Nueve (9), Diez (X), J's (J), Q's (Q) y K's (K)\n");
	puts ("\n");
	
}
void Premios (void)
{
	puts("\tSi obtiene PAREJA su apuesta se multiplicar\240 por 1.5.");
	puts("\tSi obtiene una DOBLE PAREJA se multiplicar\240 por 2.");
	puts("\tSi obtiene un TRIO su apuesta se multiplicar\240 por 2.5.");
	puts("\tSi obtiene COLOR su apuesta se muultiplicar\240 por 3.");
	puts("\tSi obtiene FULL su apuesta se multiplicar\240 por 4.");
	puts("\n");
	puts("\n");

}


char FRepetir (void)
{
	char letra;


	puts ("\n\n\tIntroduzca una 'S' o una 's' para continuar y cualquier otra letra o numero para salir.");
	puts("\n\tSi desea introducir mas dinero, escriba 'A' o 'a': ");
	printf("\t");
	scanf ("\n%c", &letra);
	fflush (stdin);
	
	return letra;
}

void FCierre (void)
{
	
//	char c;
	puts ("\t\n\nPulse \256intro\257 para cerrar la ventana...");
//	c = getchar ();
	getchar ();
}
float PedirDinero (void)
{
	float num;
	printf("\n\n\tIngrese con cuanto dinero quiere jugar, no se pueden ingresar mas de 100K\044.\n");
	printf("\tSi desea salir del juego introduzca una cantidad negativa.");
	
	do{
		printf("\t");
		scanf ("%f", &num);
   		fflush (stdin);
   		if (num>100000){
   			printf("\n\tNo se puede ingresar tanto dinero\n");
		   }
		if ((num<100)&&(num >= 0)){
			printf("\n\tDebes ingresar mas dinero para poder jugar, recuerde que no puede ingresar menos de 100\044\n");
		}   if (num < 0){
				puts("\n\t\255\255Gracias por jugar!!");
				exit(0);
				}
	}while ((num>100000)||(num<100));
	
	
	return num;
}

void DineroRestante (float num)
{
	printf("\n\n\tTe quedan %.2f\044.", num);
}

float PedirApuesta (float num1, float num2){
	
	do { 
		printf("\n\n\tLa apuesta sera de: ");
		scanf("%f", &num1);
		if (num1>num2) {
			printf("\tNo tienes tanto dinero");
		}
		if (num1 <= 0){
			
			printf("\n\n\tDebes apostar algo de dinero.");
		}
	}while ((num1>num2)||(num1<=0));
	return num1;
}
float NuevoIngreso (void)
{
	float num;
	printf("\n\n\tIngrese cuanto dinero quiere ingresar, no se pueden ingresar mas de 100K\044 o menos de 100\044\n");
	do{
		printf("\t");
		scanf ("%f", &num);
   		fflush (stdin);
   		if (num>100000){
   			printf("\n\tNo se puede ingresar tanto dinero\n");
		   }
		if (num<100){
			printf("\n\tDebes ingresar mas dinero para poder jugar\n");
		}   
	}while ((num>100000)||(num<100));
	
	
	return num;
}
char PartidaGuardada (void)
{
	char letra;


	puts ("\n\n\tIntroduzca una 'S' o una 's' si ha jugado antes, o introduzca una 'N' o una 'n',  si es su primera vez.");
	printf("\t");
	scanf ("\n%c", &letra);
	fflush (stdin);
	
	return letra;
}

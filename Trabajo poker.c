/* Trabajo Informatica Grupo CARD 

Integrantes: Daniel Zamarra Rodriguez (55521)
			 Roberto Rodríguez Pérez (55437)
			 Alberto Leamus Rondón ()
			 Carlos Xu Lin ()
			 
Este programa simula un juego de poker con baraja reducida */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vectores.h>
#include <FuncionesBasicas.h>
#define N 4
#define M 5





typedef struct
{
	char valor;
	char palo;
} Carta;

int main(){
	FPresentacion ();
	srand (time(NULL));
	int i, j;
	char valores[] = {'A', 'X', 'J', 'Q', 'K'};
	char palo[] = {'C', 'P', 'D', 'T'};
	Carta mano[] = {{valores[rand()%M],palo[rand()%N]},{valores[rand()%M],palo[rand()%N]},{valores[rand()%M],palo[rand()%N]},{valores[rand()%M],palo[rand()%N]},{valores[rand()%M],palo[rand()%N]}};
	
	//Este bucle evita que haya dos o mas cartas iguales en la misma mano 
	
	for (i=0; i<=M; i++) {
        for (j=i+1; j<=M; j++){
        	if ((mano[i].palo==mano[j].palo)&&(mano[i].valor==mano[j].valor)){
        		//printf("Hay repeticion\n");
        		do {			
					mano[i].valor = valores[rand()%M];
					
				}while (mano[i].valor==mano[j].valor);
			}
		}
    }
	printf("Su mano es: %cde%c  %cde%c  %cde%c  %cde%c  %cde%c ",mano[0].valor, mano[0].palo,mano[1].valor, mano[1].palo,mano[2].valor, mano[2].palo,mano[3].valor, mano[3].palo,mano[4].valor, mano[4].palo);
	
	/*char c[10] = {"CORAZONES"};
	char p[6] = {"PICAS"};
	char d[10] = {"DIAMANTES"};
	char t[9] = {"TREBOLES"};*/

	/*PresentarCadena(palo,4);
	printf("\n");
	PresentarCadena(valores,4);
	Cerrar();*/
	
	return 0;
}








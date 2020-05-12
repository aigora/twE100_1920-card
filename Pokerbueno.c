#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vectores.h>

#include <FuncionesBasicas.h>
#define N 4
#define M 5
#define B 20

typedef struct
{
	char valor;
	char palo;
} Carta;

int main(){
//Variables
	FPresentacion ();
	srand (time(NULL));
	int i, j, k, l, m;
	int rm, rn, rauxv, rauxp;
	int pc = 0, pd = 0, pp = 0, pt = 0;
	int pas= 0;
	int p10 = 0;
	int pj = 0;
	int pq = 0;
	int pk = 0;
	int ases = 1;
	int dieces = 1;
	int js = 1;
	int qs = 1;
	int ks = 1;
	int pareja = 0;
	int trio = 0;
	int full = 0;
	char opcion;
	char valores[] = {'A', 'X', 'J', 'Q', 'K'};
	char palo[] = {'C', 'P', 'D', 'T'};
	//Carta baraja[B];
	Carta mano[M];
	//Carta mano[]={{valores[4],palo[1]},{valores[4],palo[3]},{valores[4],palo[2]},{valores[4],palo[0]},{valores[0],palo[3]}};
	/*for (l = 0; l < M; l++) {
		printf("%cde%c-",mano[l].valor,mano[l].palo);
	}*/
	Carta baraja[N][M] = {{{valores[0],palo[0]},{valores[1],palo[0]},{valores[2],palo[0]},{valores[3],palo[0]},{valores[4],palo[0]}},
						  {{valores[0],palo[1]},{valores[1],palo[1]},{valores[2],palo[1]},{valores[3],palo[1]},{valores[4],palo[1]}},
					   	  {{valores[0],palo[2]},{valores[1],palo[2]},{valores[2],palo[2]},{valores[3],palo[2]},{valores[4],palo[2]}},
						  {{valores[0],palo[3]},{valores[1],palo[3]},{valores[2],palo[3]},{valores[3],palo[3]},{valores[4],palo[3]}}};
do {

	FPresentacion ();
	srand (time(NULL));	
	
 //Este bucle muestra la baraja completa en pantalla
printf ("Esta es la baraja con la que jugaremos: \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			printf(" %cde%c-",baraja[i][j].valor,baraja[i][j].palo);
			//printf("\n");
		}
	}

//Este bucle crea la mano sin repetir cartas
	printf("\n\nSu mano es: ");
	for (k = 0; k < M; k++){
			rm = rand()%M;			
			rn = rand()%N;
			mano[k].valor=baraja[rn][rm].valor;
			mano[k].palo=baraja[rn][rm].palo;
			baraja[rn][rm].valor = '1';
			baraja[rn][rm].palo = '2';
			if((mano[k].valor=='1')&&(mano[k].palo=='2')){
				do {
					rauxv = rand()%M;	
					rauxp = rand()%N;
					mano[k].valor=baraja[rauxp][rauxv].valor;
					mano[k].palo=baraja[rauxp][rauxv].palo;		
				}while ((mano[k].valor=='1')&&(mano[k].palo=='2'));
			}
			printf("%cde%c-",mano[k].valor,mano[k].palo);
	}
	//printf("\nSu mano es: ");					
	
	/*for (l = 0; l < M; l++) {
		printf("%cde%c-",mano[l].valor,mano[l].palo);
	}*/
/*printf("\n");
printf("\n");
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			printf("%cde%c\n",baraja[i][j].valor,baraja[i][j].palo);
			//printf("\n");
		}
	}*/
//Este bucle recorre los valores de las cartas para buscar premios
 for (i=0; i<=M; i++) {
        for (j=i+1; j<=M; j++){
        	if (((mano[i].valor)==(valores[0]))&&((mano[j].valor)==(valores[0]))){
			
				ases=ases+1;
				switch(ases) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE ASES!!");
						pas = 1;
						pareja = pareja + pas;
						break;
					case 3:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE ASES!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
				
						printf("\n¡¡ENHORABUENA TIENES UN POKER DE ASES!!");
						
						break;
				}				
			}
			if (((mano[i].valor)==(valores[1]))&&((mano[j].valor)==(valores[1]))){
				
				dieces=dieces+1;
				switch(dieces) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE DIECES!!");
						p10=1;
						pareja = pareja + p10;
						break;
					case 3:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE DIECES!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n¡¡ENHORABUENA TIENES UN POKER DE DIECES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[2]))&&((mano[j].valor)==(valores[2]))){
				
				js=js+1;
				switch(js) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE JS!!");
						pj=1;
						pareja = pareja + pj;
						break;
					case 3:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE JS!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n¡¡ENHORABUENA TIENES UN POKER DE JS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[3]))&&((mano[j].valor)==(valores[3]))){
				
				qs=qs+1;
				switch(qs) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE QS!!");
						pq=1;
						pareja = pareja + pq;
						break;
					case 3:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE QS!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n¡¡ENHORABUENA TIENES UN POKER DE QS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[4]))&&((mano[j].valor)==(valores[4]))){
				
				ks=ks+1;
				switch(ks) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						pk = 1;
						pareja = pareja + pk;
						break;
					case 3:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n¡¡ENHORABUENA TIENES UN POKER DE KS!!");
						break;
				}
			}
		}
	}
	 for (i=0; i<=M; i++) {
       
        	if (((mano[i].palo)==(palo[0]))){
			
				pc = pc + 1;
				
			}
			if (((mano[i].palo)==(palo[1]))){
				
				pp = pp + 1;
				
			}
			if (((mano[i].palo)==(palo[2]))){
				
				pd = pd + 1;
				
			}
			if (((mano[i].palo)==(palo[3]))){
				
				pt = pt + 1;
				
			}
		
	}
	if ((pareja==1)&&(trio==0)){
		printf("\n\nENHORABUENA, TIENES UNA PAREJA!!");
	}if (pareja==2){
		printf("\n\nENHORABUENA, TIENES UNA DOBLE PAREJA!!");
	}if ((pareja==1)&&(trio==1)){
		full +=1;
		trio=0;
		printf("\n\nENHORABUENA TIENES UN FULL!!");
	}if (trio == 1){
		printf("\n\nENHORABUENA, TIENES UN TRIO!!");
	}if ((pc == 5)||(pp ==5)||(pd == 5)||(pt == 5)){
		trio = 0;
		printf("\n\nENHORABUENA TIENES COLOR!!!");
	}
  
// Repetición
	opcion = FRepetir ();
		
		}while ((opcion == 's')  || (opcion == 'S'));

	// Despedida y cierre:
	FCierre ();


	
return 0;	
}
	

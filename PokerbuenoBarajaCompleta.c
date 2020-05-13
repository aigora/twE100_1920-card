/* Trabajo Informatica Grupo CARD 
Integrantes: Daniel Zamarra Rodriguez (55521)
			 Roberto Rodríguez Pérez (55437)
			 Alberto Leamus Rondón ()
			 Carlos Xu Lin (55601)
			 
Este programa simula un juego de poker con baraja reducida */





#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vectores.h>

#include <FuncionesBasicas.h>
#define N 4
#define M 13
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
	char opcion;
	char valores[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
	char palo[] = {'C', 'P', 'D', 'T'};
	//Carta baraja[B];
	Carta mano[M];
	//Carta mano[]={{valores[4],palo[1]},{valores[4],palo[3]},{valores[4],palo[2]},{valores[4],palo[0]},{valores[0],palo[3]}};

	FPresentacion ();
	Carta baraja[N][M] = {{{valores[0],palo[0]},{valores[1],palo[0]},{valores[2],palo[0]},{valores[3],palo[0]},{valores[4],palo[0]},{valores[5],palo[0]},{valores[6],palo[0]},{valores[7],palo[0]},{valores[8],palo[0]},{valores[9],palo[0]},{valores[10],palo[0]},{valores[11],palo[0]},{valores[12],palo[0]}},
						  {{valores[0],palo[1]},{valores[1],palo[1]},{valores[2],palo[1]},{valores[3],palo[1]},{valores[4],palo[1]},{valores[5],palo[1]},{valores[6],palo[1]},{valores[7],palo[1]},{valores[8],palo[1]},{valores[9],palo[1]},{valores[10],palo[1]},{valores[11],palo[1]},{valores[12],palo[1]}},
					   	  {{valores[0],palo[2]},{valores[1],palo[2]},{valores[2],palo[2]},{valores[3],palo[2]},{valores[4],palo[2]},{valores[5],palo[2]},{valores[6],palo[2]},{valores[7],palo[2]},{valores[8],palo[2]},{valores[9],palo[2]},{valores[10],palo[2]},{valores[11],palo[2]},{valores[12],palo[2]}},
						  {{valores[0],palo[3]},{valores[1],palo[3]},{valores[2],palo[3]},{valores[3],palo[3]},{valores[4],palo[3]},{valores[5],palo[3]},{valores[6],palo[3]},{valores[7],palo[3]},{valores[8],palo[3]},{valores[9],palo[3]},{valores[10],palo[3]},{valores[11],palo[3]},{valores[12],palo[3]}}};
	printf ("\tEsta es la baraja con la que jugaremos: \n");
//Este bucle muestra la baraja completa en pantalla
		printf("\t");
	for(j = 0; j < M; j++){
			printf(" %cde%c-",baraja[0][j].valor,baraja[0][j].palo);
			//printf("\n");
		} 
		
		printf("\n");
		printf("\t"); 
	for(j = 0; j < M; j++){
			printf(" %cde%c-",baraja[1][j].valor,baraja[1][j].palo);
			//printf("\n");
		}
	
		printf("\n");
		printf("\t"); 
	for(j = 0; j < M; j++){
			printf(" %cde%c-",baraja[2][j].valor,baraja[2][j].palo);
			//printf("\n");
		}

		printf("\n");
		printf("\t"); 
	for(j = 0; j < M; j++){
			printf(" %cde%c-",baraja[3][j].valor,baraja[3][j].palo);
			//printf("\n");
		}
do {
	int pc = 0, pd = 0, pp = 0, pt = 0; //variables para color
	int pas= 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0, p9 = 0, p10 = 0, pj = 0, pq = 0, pk = 0; // variables para parejas
	int ases = 1, doses = 1, treses = 1, cuatros = 1, cincos = 1, seises = 1, sietes = 1, ochos = 1, nueves = 1, dieces = 1, js = 1, qs = 1, ks = 1; //variables para contar cartas
	//variables que cuentan los premios
	int pareja = 0;
	int trio = 0;
	int full = 0;
	//Inicializacion de la baraja
	Carta baraja[N][M] = {{{valores[0],palo[0]},{valores[1],palo[0]},{valores[2],palo[0]},{valores[3],palo[0]},{valores[4],palo[0]},{valores[5],palo[0]},{valores[6],palo[0]},{valores[7],palo[0]},{valores[8],palo[0]},{valores[9],palo[0]},{valores[10],palo[0]},{valores[11],palo[0]},{valores[12],palo[0]}},
						  {{valores[0],palo[1]},{valores[1],palo[1]},{valores[2],palo[1]},{valores[3],palo[1]},{valores[4],palo[1]},{valores[5],palo[1]},{valores[6],palo[1]},{valores[7],palo[1]},{valores[8],palo[1]},{valores[9],palo[1]},{valores[10],palo[1]},{valores[11],palo[1]},{valores[12],palo[1]}},
					   	  {{valores[0],palo[2]},{valores[1],palo[2]},{valores[2],palo[2]},{valores[3],palo[2]},{valores[4],palo[2]},{valores[5],palo[2]},{valores[6],palo[2]},{valores[7],palo[2]},{valores[8],palo[2]},{valores[9],palo[2]},{valores[10],palo[2]},{valores[11],palo[2]},{valores[12],palo[2]}},
						  {{valores[0],palo[3]},{valores[1],palo[3]},{valores[2],palo[3]},{valores[3],palo[3]},{valores[4],palo[3]},{valores[5],palo[3]},{valores[6],palo[3]},{valores[7],palo[3]},{valores[8],palo[3]},{valores[9],palo[3]},{valores[10],palo[3]},{valores[11],palo[3]},{valores[12],palo[3]}}};
	//Establece la semilla para el generador de números pseudo-aleatorios
	srand (time(NULL));	
	
 

	//Esta funcion para la ejecucion del programa durante unos segundos
	printf("\n\tBarajando las cartas...");
	sleep(2);
	printf("\n\tRepartiendo...");
	sleep(1);
//Este bucle crea la mano sin repetir cartas
	printf("\n\n\tSu mano es: ");
	for (k = 0; k < 5; k++){
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
			printf("\t");
			printf("%cde%c-",mano[k].valor,mano[k].palo);
	}

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
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE ASES!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
				
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE ASES!!");
						
						break;
				}				
			}
			if (((mano[i].valor)==(valores[1]))&&((mano[j].valor)==(valores[1]))){
				
				doses=doses+1;
				switch(doses) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE DIECES!!");
						p2=1;
						pareja = pareja + p2;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE DIECES!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE DOSES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[2]))&&((mano[j].valor)==(valores[2]))){
				
				treses=treses+1;
				switch(treses) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE JS!!");
						p3=1;
						pareja = pareja + p3;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE JS!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE TRESES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[3]))&&((mano[j].valor)==(valores[3]))){
				
			cuatros=cuatros+1;
				switch(cuatros) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE QS!!");
						p4=1;
						pareja = pareja + p4;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE QS!!");
						trio = trio + 1;
						pareja -=1;
						break;
					case 5: 
					
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE CUATROS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[4]))&&((mano[j].valor)==(valores[4]))){
				
				cincos=cincos+1;
				switch(cincos) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p5 = 1;
						pareja = pareja + p5;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE CINCOS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[5]))&&((mano[j].valor)==(valores[5]))){
				
				seises=seises+1;
				switch(seises) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p6 = 1;
						pareja = pareja + p6;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE SEISES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[6]))&&((mano[j].valor)==(valores[6]))){
				
				sietes=sietes+1;
				switch(sietes) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p7 = 1;
						pareja = pareja + p7;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE SIETES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[7]))&&((mano[j].valor)==(valores[7]))){
				
				ochos=ochos+1;
				switch(ochos) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p8 = 1;
						pareja = pareja + p8;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE OCHOS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[8]))&&((mano[j].valor)==(valores[8]))){
				
				nueves=nueves+1;
				switch(nueves) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p9 = 1;
						pareja = pareja + p9;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE NUEVES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[9]))&&((mano[j].valor)==(valores[9]))){
				
				dieces=dieces+1;
				switch(dieces) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						p10 = 1;
						pareja = pareja + p10;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE DIECES!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[10]))&&((mano[j].valor)==(valores[10]))){
				
				js=js+1;
				switch(js) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						pj = 1;
						pareja = pareja + pj;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE JS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[11]))&&((mano[j].valor)==(valores[11]))){
				
				qs=qs+1;
				switch(qs) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						pq = 1;
						pareja = pareja + pq;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE QS!!");
						break;
				}
			}
			if (((mano[i].valor)==(valores[12]))&&((mano[j].valor)==(valores[12]))){
				
				ks=ks+1;
				switch(ks) {
					case 2:
						//printf("\n¡¡ENHORABUENA TIENES UNA PAREJA DE kS!!");
						pk = 1;
						pareja = pareja + pk;
						break;
					case 4:
						//printf("\n¡¡ENHORABUENA TIENES UN TRIO DE KS!!");
						trio = 1;
						pareja -=1;
						break;
					case 5: 
						
						printf("\n\t¡¡ENHORABUENA TIENES UN POKER DE KS!!");
						break;
				}
			}
		}
	}
	//Este bucle recorre los palosde la mano para ver si hay color o  no
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
	//Este if anidado analiza los contadores de los premios para analizar que premio tienes en la mano
	if ((pareja==1)&&(trio==0)){
		printf("\n\n\tENHORABUENA, TIENES UNA PAREJA!!");
	}if (pareja==3){
		printf("\n\nENHORABUENA, TIENES UNA DOBLE PAREJA!!");
	}if ((pareja==1)&&(trio==1)){
		full +=1;
		trio=0;
		printf("\n\n\tENHORABUENA TIENES UN FULL!!");
	}if (trio == 1){
		printf("\n\n\tENHORABUENA, TIENES UN TRIO!!");
	}if ((pc == 5)||(pp ==5)||(pd == 5)||(pt == 5)){
		trio = 0;
		printf("\n\n\tENHORABUENA TIENES COLOR!!!");
	}if ((pareja == 0)&&(trio == 0)&&(full == 0)&&(pc != 5)&&(pp != 5)&&(pd != 5)&&(pt != 5)) {
		printf("\n\n\tLo sentimos, no hay premio, pruebe otra vez");
	}
  pas= 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0, p9 = 0, p10 = 0, pj = 0, pq = 0, pk = 0;
// Repetición
	opcion = FRepetir ();
		
		}while ((opcion == 's')  || (opcion == 'S'));

	// Despedida y cierre:
	FCierre ();


	
return 0;	
}
	
